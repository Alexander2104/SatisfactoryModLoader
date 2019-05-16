#pragma once
#include <Windows.h>
#include <Lib.h>
#include <util/FString.h>

namespace SML {
	namespace Mod {
		class Hooks {
		public:
			static PVOID chatFunc;
			static PVOID pakFunc;

			static void hookFunctions();

			//void get_signing_keys(ModReturns* modReturns, void* outKeys);

			static void player_sent_message(void* player, SML::Objects::FString* message);
		};
	}
}