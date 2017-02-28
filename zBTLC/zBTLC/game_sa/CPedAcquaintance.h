#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class CPedAcquaintance
{
public:
	unsigned __int32 m_dwRespect;
	unsigned __int32 m_dwLike;
	unsigned __int32 field_8;
	unsigned __int32 m_dwDislike;
	unsigned __int32 m_dwHate;
};
#pragma pack(pop)

VALIDATE_SIZE(CPedAcquaintance, 0x14);