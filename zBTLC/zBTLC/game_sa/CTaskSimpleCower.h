#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunAnim.h"

class CTaskSimpleCower : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleCower(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCower, 0x);