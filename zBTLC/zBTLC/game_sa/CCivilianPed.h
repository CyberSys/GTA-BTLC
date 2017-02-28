#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPed.h"

class CCivilianPed : public CPed {
public:
    CCivilianPed(ePedType pedType, unsigned int modelIndex);
};

VALIDATE_SIZE(CCivilianPed, 0x79C);