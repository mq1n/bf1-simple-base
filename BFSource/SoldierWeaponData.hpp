#pragma once

namespace fb
{
	class SoldierWeaponData
	{
	public:
		char _0x0000[ 144 ];
		WeaponFiringData* m_pWeaponFiringData; //0x0090 [WeaponFiringData]
		char _0x0098[ 216 ];
		char* m_Name; //0x0170 
		char _0x0178[ 16 ];
		SoldierAimingSimulationData* m_pSoldierAimingSimulationData; //0x0188 [SoldierAimingSimulationData]
		char _0x0190[ 40 ];
		SoldierWeaponBlueprint* m_pSoldierWeaponBlueprint; //0x01B8 [SoldierWeaponBlueprint]
		char _0x01C0[ 640 ];

	};//Size=0x0440
}