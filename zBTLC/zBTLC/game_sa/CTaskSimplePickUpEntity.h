#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleHoldEntity.h"

class CTaskSimplePickUpEntity : public CTaskSimpleHoldEntity {
protected:
    CTaskSimplePickUpEntity(plugin::dummy_func_t a) : CTaskSimpleHoldEntity(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimplePickUpEntity, 0x);