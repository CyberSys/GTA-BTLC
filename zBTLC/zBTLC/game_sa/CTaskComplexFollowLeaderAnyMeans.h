#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexFollowLeaderAnyMeans : public CTaskComplex {
protected:
    CTaskComplexFollowLeaderAnyMeans(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexFollowLeaderAnyMeans, 0x);