#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "CVector.h"

class FxFrustumInfo_c
{
public:
	CVector field_0;
	int field_C;
	int field_10;
	RwPlane m_planes[4];
};

VALIDATE_SIZE(FxFrustumInfo_c, 0x54);