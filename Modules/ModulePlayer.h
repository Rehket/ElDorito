#pragma once

#include "ModuleBase.h"

namespace Modules
{
	class ModulePlayer : public Utils::Singleton<ModulePlayer>, public ModuleBase
	{
	public:
		Command* VarArmorAccessory;
		Command* VarArmorArms;
		Command* VarArmorChest;
		Command* VarArmorHelmet;
		Command* VarArmorLegs;
		Command* VarArmorPelvis;
		Command* VarArmorShoulders;

		Command* VarColorsPrimary;
		Command* VarColorsSecondary;
		Command* VarColorsVisor;
		Command* VarColorsLights;
		Command* VarColorsHolo;

		Command* VarPlayerName;
		Command* VarUserID;

		wchar_t UserName[17];

		ModulePlayer();
	};
}