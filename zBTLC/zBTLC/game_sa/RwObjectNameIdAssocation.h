#pragma once
#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
struct RwObjectNameIdAssocation
{
	char *m_pName;
	unsigned int m_dwHierarchyId;
	unsigned int m_dwFlags;
};
#pragma pack(pop)

VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);