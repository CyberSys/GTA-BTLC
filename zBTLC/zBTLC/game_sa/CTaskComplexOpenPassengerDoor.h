#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexEnterCar.h"

class CTaskComplexOpenPassengerDoor : public CTaskComplexEnterCar {
protected:
    CTaskComplexOpenPassengerDoor(plugin::dummy_func_t a) : CTaskComplexEnterCar(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexOpenPassengerDoor, 0x);