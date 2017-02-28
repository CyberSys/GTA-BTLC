#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push,4)
class CReference
{
public:
	class CReference *m_pNext;
	class CEntity **m_ppEntity;
};
#pragma pack(pop)

VALIDATE_SIZE(CReference, 8);