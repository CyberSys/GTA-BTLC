#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskInteriorBeInHouse : public CTaskComplex {
protected:
    CTaskInteriorBeInHouse(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorBeInHouse, 0x);