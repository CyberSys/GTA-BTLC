#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleFacial : public CTaskSimple {
protected:
    CTaskSimpleFacial(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleFacial, 0x);