#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexEnterCar.h"

class CTaskComplexOpenDriverDoor : public CTaskComplexEnterCar {
protected:
    CTaskComplexOpenDriverDoor(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexOpenDriverDoor, 0x);