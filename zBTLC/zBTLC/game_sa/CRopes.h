#pragma once
#include "plbase/PluginBase_SA.h"
#include "CRope.h"


class CRopes
{
public:
	static CRope* ms_aRopes;	// array of 8
	static int& ms_bPlayerControlsCrane;


	static void CreateRopeForSwatPed(CVector const& startPos);
	static void FindPickupHeight(CEntity* entity);

	// Returns id to array
	static int FindRope(unsigned int id);
	static void Init();
	static bool IsCarriedByRope(CEntity* entity);

	// Must be used in loop to make attached to holder
	static bool RegisterRope(CEntity* ropeId, unsigned int ropeType, CVector startPos, bool bExpires, unsigned char segmentCount, unsigned char flags, CEntity* holder, unsigned int timeExpire);
	static void Render();
	static void SetSpeedOfTopNode(unsigned int ropeId, CVector dirSpeed);
	static void Shutdown();
	static void Update();
};