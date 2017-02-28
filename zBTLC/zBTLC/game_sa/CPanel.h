#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class CPanel
{
public:
    unsigned short m_nFrameId;
    unsigned short m_nAxis;
    float m_fAngleLimit;
    CVector m_vRotation;
    CVector m_vPos;
};
#pragma pack(pop)

VALIDATE_SIZE(CPanel, 0x20);