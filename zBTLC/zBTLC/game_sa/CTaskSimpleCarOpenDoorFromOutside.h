#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"

class CTaskSimpleCarOpenDoorFromOutside : public CTaskSimple {
protected:
    CTaskSimpleCarOpenDoorFromOutside(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarOpenDoorFromOutside, 0x);