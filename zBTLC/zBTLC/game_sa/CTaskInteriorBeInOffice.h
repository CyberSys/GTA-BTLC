#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskInteriorBeInOffice : public CTaskComplex {
protected:
    CTaskInteriorBeInOffice(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorBeInOffice, 0x);