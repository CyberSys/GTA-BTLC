#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskInteriorShopKeeper : public CTaskComplex {
protected:
    CTaskInteriorShopKeeper(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskInteriorShopKeeper, 0x);