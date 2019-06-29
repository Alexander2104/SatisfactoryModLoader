#pragma once
#include <tuple>
#include <string>
#include <iostream>
#include <filesystem>
#include <Windows.h>
#include <mod/ModHandler.h>

namespace SML {
	static const std::string modLoaderVersion = "1.0.0-pr5"; // SML's version
	static const std::string targetVersion[] = { "99427", "100979" }; //CLs of Satisfactory, 1st is normal CL and 2nd is experimental CL
	static bool loadConsole = true;
	static bool debugOutput = true;
	static bool supressErrors = false;
	static bool chatCommands = true;

	extern Mod::ModHandler modHandler;

	void startSML();
	void readConfig();
	void cleanup();
}