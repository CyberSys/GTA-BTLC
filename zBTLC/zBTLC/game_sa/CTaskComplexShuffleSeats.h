#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexShuffleSeats : public CTaskComplex {
protected:
    CTaskComplexShuffleSeats(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexShuffleSeats, 0x);