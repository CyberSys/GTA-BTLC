#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleWaitForPizza : public CTaskSimple {
protected:
    CTaskSimpleWaitForPizza(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleWaitForPizza, 0x);