#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexHitPedWithCar : public CTaskComplex {
protected:
    CTaskComplexHitPedWithCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexHitPedWithCar, 0x);