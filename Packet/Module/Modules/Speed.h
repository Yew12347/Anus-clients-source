#pragma once
#include "..\ModuleManager.h"
#include "Module.h"

class Speed : public IModule {
private:
	bool jumpMode = true;
	float height = 0.40f;
	int counter = 1;

	bool preventKick = false;

public:
	int timer = 20;
	float speed = 0.325f;
	Speed();
	~Speed();

			SettingEnum mode = this;

	// Inherited via IModule
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onSendPacket(C_Packet* packet) override;
	virtual void onMove(C_MoveInputHandler* input) override;
};