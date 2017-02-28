#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class CQueuedMode
{
public:
	unsigned __int16 m_wMode;
	float            m_fDuration;
	unsigned __int16 m_MinZoom;
	unsigned __int16 m_MaxZoom;
};
#pragma pack(pop)

VALIDATE_SIZE(CQueuedMode, 0xC);