#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexGetOnBoatSeat : public CTaskComplex {
protected:
    CTaskComplexGetOnBoatSeat(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexGetOnBoatSeat, 0x);