#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexCarDriveMission.h"

class CTaskComplexCarDriveMissionKillPed : public CTaskComplexCarDriveMission {
protected:
    CTaskComplexCarDriveMissionKillPed(plugin::dummy_func_t a) : CTaskComplexCarDriveMission(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveMissionKillPed, 0x);