#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleHurtPedWithCar : public CTaskSimple {
protected:
    CTaskSimpleHurtPedWithCar(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHurtPedWithCar, 0x);