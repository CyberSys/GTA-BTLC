#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexEnterCar : public CTaskComplex {
protected:
    CTaskComplexEnterCar(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexEnterCar, 0x);