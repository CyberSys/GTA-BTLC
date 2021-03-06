#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class  CBulletTrace
{
public:
	CVector m_vStart;
	CVector m_vEnd;
	unsigned char m_bExist;
	unsigned int m_dwCreationTime;
	unsigned int m_dwLifeTime;
	float m_fRadius;
	unsigned char m_nTransparency;
};
#pragma pack(pop)

VALIDATE_SIZE(CBulletTrace, 0x2C);

#define MAX_BULLETTRACES 16

class CBulletTraces
{
public:
	// count: 16
	static CBulletTrace *aTraces;
	// TODO:
	// static void AddTrace(CVector *start, CVector *end, int weaponType, CEntity *entity);
	static void AddTrace(CVector *start, CVector *end, float radius, unsigned int time, unsigned char transparency);
	static void Render();
	static void Update();
};