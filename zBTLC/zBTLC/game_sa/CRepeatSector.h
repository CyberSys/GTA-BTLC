#pragma once
#include "plbase/PluginBase_SA.h"
#include "CPtrList.h"

#pragma pack(push, 4)
class CRepeatSector
{
public:
	CPtrList m_VehiclesList;
	CPtrList m_PedsList;
	CPtrList m_ObjectsList;
};
#pragma pack(pop)

VALIDATE_SIZE(CRepeatSector, 0xC);