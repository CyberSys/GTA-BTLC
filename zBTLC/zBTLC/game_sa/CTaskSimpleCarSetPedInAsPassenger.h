#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleCarSetPedInAsPassenger : public CTaskSimple {
protected:
    CTaskSimpleCarSetPedInAsPassenger(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSetPedInAsPassenger, 0x);