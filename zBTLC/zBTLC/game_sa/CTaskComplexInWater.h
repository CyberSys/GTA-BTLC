#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexInWater : public CTaskComplex {
protected:
    CTaskComplexInWater(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexInWater, 0x);