#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#define MAX_POINTLIGHTS 32

#pragma pack(push, 4)
struct tPointLight
{
public:
	CVector m_vPosn;
	CVector m_vDirection;
    float m_fRange;
    float m_fColorRed;
    float m_fColorGreen;
    float m_fColorBlue;
    class CEntity *m_pEntityToLight;
    unsigned char m_nType;
    unsigned char m_nFogType;
    unsigned char m_bGenerateShadows;
};
#pragma pack(pop)

VALIDATE_SIZE(tPointLight, 0x30);

class CPointLights
{
public:
	// static variables

	// num of registered lights in frame
	static unsigned int& NumLights;
	// lights array. Count: MAX_POINTLIGHTS (32)
	static tPointLight *aLights;

	// static functions
	static void AddLight(unsigned char lightType, CVector origin, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows, CEntity* entityAffected);
};