#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleSay : public CTaskSimple {
protected:
    CTaskSimpleSay(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleSay, 0x);