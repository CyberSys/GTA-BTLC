#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskInteriorGoToInfo : public CTaskComplex {
protected:
    CTaskInteriorGoToInfo(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorGoToInfo, 0x);