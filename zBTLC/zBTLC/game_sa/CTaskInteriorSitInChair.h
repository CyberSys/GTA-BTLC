#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskInteriorSitInChair : public CTaskSimple {
protected:
    CTaskInteriorSitInChair(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorSitInChair, 0x);