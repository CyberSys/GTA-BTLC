#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "CVector.h"

class CSimpleTransform
{
public:
	CVector m_vPosn;
	float m_fHeading;

	void UpdateRwMatrix(RwMatrix *out);
	void Invert(CSimpleTransform const& base);
	void UpdateMatrix(class CMatrix *out);
};

VALIDATE_SIZE(CSimpleTransform, 0x10);