#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVector.h"
#include "CEntity.h"
#include "CObject.h"

#pragma pack(push, 1)
class CRope
{
public:
	CVector m_avRopeSegments[32];
	CVector m_avRopeSegmentsReleased[32];
	int m_dwId;
	float float304;
	float m_fMass;
	float m_fRopeTotalLength;
	CEntity *m_pRopeHolder;
	CObject *m_pRopeAttachObject;
	CEntity *m_pAttachedEntity;
	float m_fRopeSegmentLength;
	unsigned int m_dwTime;
	char m_nNumSegments;
	char m_nRopeType;
	char m_nFlags1;
	char m_nFlags2;


	void CreateHookObjectForRope();
	void PickUpObject(CEntity* object);
	void ReleasePickedUpObject();
	void Remove();
	void Render();
	void Update();
	void UpdateWeightInRope(CVector a1, float a2, CVector *a3);
};
#pragma pack(pop)

