#include "CAERadioTrackManager.h"

bool CAERadioTrackManager::IsVehicleRadioActive()
{
	return ((bool (__thiscall *)(CAERadioTrackManager *))0x4E9800)(this);
}

char *CAERadioTrackManager::GetRadioStationName(signed char id)
{
	return ((char *(__thiscall *)(CAERadioTrackManager *, signed char))0x4E9E10)(this, id);
}

tMusicTrackHistory *CAERadioTrackManager::m_nMusicTrackIndexHistory = (tMusicTrackHistory *)0xB62B40;