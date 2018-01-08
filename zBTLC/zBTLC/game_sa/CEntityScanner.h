#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class CEntityScanner
{
protected:
    void *vtable;
public:
    int field_4;
    unsigned int m_dwCount;
    class CEntity *m_apEntities[16];
    int field_4C;
};
#pragma pack(pop)

VALIDATE_SIZE(CEntityScanner, 0x50);