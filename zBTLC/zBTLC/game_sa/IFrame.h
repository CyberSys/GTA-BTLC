#pragma once

#include "plbase/PluginBase_SA.h"
#include "CQuaternion.h"

#pragma pack(push, 4)
class IFrame
{
public:
    CVector m_qOrientation;
    CQuaternion m_vTranslation;
};
#pragma pack(pop)

VALIDATE_SIZE(IFrame, 0x1C);