#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexUseAttractorPartner : public CTaskComplex {
protected:
    CTaskComplexUseAttractorPartner(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseAttractorPartner, 0x);