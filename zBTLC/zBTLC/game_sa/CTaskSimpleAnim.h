#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleAnim : public CTaskSimple {
protected:
    CTaskSimpleAnim(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleAnim, 0x);