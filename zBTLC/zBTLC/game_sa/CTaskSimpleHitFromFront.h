#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleRunAnim.h"

class CTaskSimpleHitFromFront : public CTaskSimpleRunAnim {
protected:
    CTaskSimpleHitFromFront(plugin::dummy_func_t a) : CTaskSimpleRunAnim(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleHitFromFront, 0x);