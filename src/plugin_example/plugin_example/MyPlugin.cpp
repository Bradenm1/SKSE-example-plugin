#include "MyPlugin.h"
#include "skse/GameData.h"
#include "skse/NiTypes.h"

namespace MyPluginNamespace {
	void GiveAllPerks(StaticFunctionTag *base) {
		DataHandler* dHandler = DataHandler::GetSingleton();
		BGSPerk* perk = NULL;
		for (UInt32 i = 0; i < dHandler->perks.count; i++) {
			if (dHandler->perks.GetNthItem(i, perk)) {
				_MESSAGE("Added perk: %s", perk->fullName.name);
				(*g_thePlayer)->AddPerk(perk, (UInt32)1);
			}
		}

	}

	bool RegisterFuncs(VMClassRegistry* registry) {
		registry->RegisterFunction(
			new NativeFunction0 <StaticFunctionTag, void>("GiveAllPerks", "GiveAllPerksClass", MyPluginNamespace::GiveAllPerks, registry));

		return true;
	}
} 
