#include "plbase/PluginBase_SA.h"
#include "CPlaneTrail.h"

#define NUM_PLANE_TRAILS 3

class CPlaneTrails
{
public:
	// count: NUM_PLANE_TRAILS (3)
	static CPlaneTrail *aArray;

	static void Init();
	static void Update();
	static void RegisterPoint(CVector point, unsigned int trailIndex);
};