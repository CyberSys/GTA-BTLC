#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexDie : public CTaskComplex {
protected:
    CTaskComplexDie(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDie, 0x);