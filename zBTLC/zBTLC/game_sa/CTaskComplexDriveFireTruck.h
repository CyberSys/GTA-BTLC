#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class CTaskComplexDriveFireTruck : public CTaskComplex {
protected:
    CTaskComplexDriveFireTruck(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDriveFireTruck, 0x);