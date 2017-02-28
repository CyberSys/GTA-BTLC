#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
struct tTransmissionGear
{
	float m_fMaxVelocity;
	float m_fChangeUpVelocity;
	float m_fChangeDownVelocity;
};
#pragma pack(pop)

VALIDATE_SIZE(tTransmissionGear, 0xC);