#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexMoveBackAndJump : public CTaskComplex {
protected:
    CTaskComplexMoveBackAndJump(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexMoveBackAndJump, 0x);