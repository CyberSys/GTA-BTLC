#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplexPartner.h"

class CTaskComplexPartnerShove : public CTaskComplexPartner {
protected:
    CTaskComplexPartnerShove(plugin::dummy_func_t a) : CTaskComplexPartner(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexPartnerShove, 0x);