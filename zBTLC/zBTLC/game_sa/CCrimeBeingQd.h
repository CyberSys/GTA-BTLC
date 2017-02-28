#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class CCrimeBeingQd
{
public:
    unsigned __int32 m_dwCrimeType;
    unsigned __int32 m_dwCrimeId;
    unsigned __int32 m_dwStartTime;
    CVector m_vCoors;
    unsigned __int8 m_bAlreadyReported;
    unsigned __int8 m_bPoliceDontReallyCare;
};
#pragma pack(pop)

VALIDATE_SIZE(CCrimeBeingQd, 0x1C);