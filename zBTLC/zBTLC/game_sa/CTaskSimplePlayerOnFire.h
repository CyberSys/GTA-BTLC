#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimplePlayerOnFire : public CTaskSimple {
protected:
    CTaskSimplePlayerOnFire(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePlayerOnFire, 0x);