#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleBeKickedOnGround : public CTaskSimple {
protected:
    CTaskSimpleBeKickedOnGround(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleBeKickedOnGround, 0x);