#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleEvasiveDive : public CTaskSimple {
protected:
    CTaskSimpleEvasiveDive(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleEvasiveDive, 0x);