#pragma once
#include "plbase/PluginBase_SA.h"
#include "CClumpModelInfo.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class CWeaponModelInfo : public CClumpModelInfo {
public:
	eWeaponType m_weaponInfo;
};
#pragma pack(pop)

VALIDATE_SIZE(CWeaponModelInfo, 0x28);