#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexInvestigateDisturbance : public CTaskComplex {
protected:
    CTaskComplexInvestigateDisturbance(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexInvestigateDisturbance, 0x);