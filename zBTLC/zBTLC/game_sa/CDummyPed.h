#pragma once
#include "plbase/PluginBase_SA.h"
#include "CDummy.h"

#pragma pack(push, 4)
class CDummyPed : public CDummy {
public:
};
#pragma pack(pop)

VALIDATE_SIZE(CDummyPed, 0x38);