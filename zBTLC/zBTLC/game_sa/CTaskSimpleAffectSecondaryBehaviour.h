#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleAffectSecondaryBehaviour : public CTaskSimple {
protected:
    CTaskSimpleAffectSecondaryBehaviour(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleAffectSecondaryBehaviour, 0x);