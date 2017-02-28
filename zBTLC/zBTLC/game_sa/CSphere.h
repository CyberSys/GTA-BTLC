#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class CSphere
{
public:
	CVector m_vCenter;
	float m_fRadius;

	void Set(float radius, CVector  const& center);
};
#pragma pack(pop)

VALIDATE_SIZE(CSphere, 0x10);