/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "rw\skeleton.h"

#pragma pack(push, 1)
// Set values to 128 unless otherwise specified
class CControllerState {
public:
	signed short LeftStickX; // move/steer left (-128?)/right (+128)
	signed short LeftStickY; // move back(+128)/forwards(-128?)
	signed short RightStickX; // numpad 6(+128)/numpad 4(-128?)
	signed short RightStickY;

	signed short LeftShoulder1;
	signed short LeftShoulder2;
	signed short RightShoulder1; // target / hand brake
	signed short RightShoulder2;

	signed short DPadUp; // radio change up           Next radio station / Call gang forward/Recruit gang member
	signed short DPadDown; // radio change down       Previous radio station / Gang stay back/Release gang (hold)
	signed short DPadLeft; //                         Skip trip/Action / Negative talk reply
	signed short DPadRight; //                        Next user MP3 track / Positive talk reply

	signed short Start;                             //Pause
	signed short Select;                            //Camera modes

	signed short ButtonSquare; // jump / reverse      Break/Reverse / Jump/Climb
	signed short ButtonTriangle; // get in/out        Exit vehicle / Enter veihcle
	signed short ButtonCross; // sprint / accelerate  Accelerate / Sprint/Swim
	signed short ButtonCircle; // fire                Fire weapon

	signed short ShockButtonL;
	signed short ShockButtonR; // look behind

	signed short m_bChatIndicated;
	signed short m_bPedWalk;
	signed short m_bVehicleMouseLook;
	signed short m_bRadioTrackSkip;
};
#pragma pack(pop)

VALIDATE_SIZE(CControllerState, 0x30);

#pragma pack(push, 1)
class CMouseControllerState {
public:
	unsigned char lmb;
	unsigned char rmb;
	unsigned char mmb;
	unsigned char wheelUp;
	unsigned char wheelDown;
	unsigned char bmx1;
	unsigned char bmx2;
	char __align;
	float Z;
	float X;
	float Y;
};
#pragma pack(pop)

VALIDATE_SIZE(CMouseControllerState, 0x14);

#pragma pack(push, 1)
class CKeyboardState {
public:
	short FKeys[12];
	short standardKeys[256];
	short esc;
	short insert;
	short del;
	short home;
	short end;
	short pgup;
	short pgdn;
	short up;
	short down;
	short left;
	short right;
	short scroll;
	short pause;
	short numlock;
	short div;
	short mul;
	short sub;
	short add;
	short enter;
	short decimal;
	short num1;
	short num2;
	short num3;
	short num4;
	short num5;
	short num6;
	short num7;
	short num8;
	short num9;
	short num0;
	short back;
	short tab;
	short capslock;
	short extenter;
	short lshift;
	short rshift;
	short shift;
	short lctrl;
	short rctrl;
	short lmenu;
	short rmenu;
	short lwin;
	short rwin;
	short apps;
};
#pragma pack(pop)


class CPed;

#pragma pack(push, 1)
class CPad {
public:
	CControllerState NewState;
	CControllerState OldState;
	short SteeringLeftRightBuffer[10];
	int DrunkDrivingBufferUsed;
	CControllerState PCTempKeyState;
	CControllerState PCTempJoyState;
	CControllerState PCTempMouseState;
	char Phase;
private:
	char _pad109;
public:
	short Mode;
	short ShakeDur;
	short DisablePlayerControls;
	char ShakeFreq;
	char bHornHistory[5];
	char iCurrHornHistory;
	char JustOutOfFrontEnd;
	char bApplyBrakes;
	char bDisablePlayerEnterCar;
	char bDisablePlayerDuck;
	char bDisablePlayerFireWeapon;
	char bDisablePlayerFireWeaponWithL1;
	char bDisablePlayerCycleWeapon;
	char bDisablePlayerJump;
	char bDisablePlayerDisplayVitalStats;
	int LastTimeTouched;
	int AverageWeapon;
	int AverageEntries;
	int NoShakeBeforeThis;
	char NoShakeFreq;
private:
	char _pad131[3];
public:

	// Static variables

	// mouse states
	static CMouseControllerState &PCTempMouseControllerState;
	static CMouseControllerState &NewMouseControllerState;
	static CMouseControllerState &OldMouseControllerState;

	// Functions list : Not finished

	void UpdateMouse();
	void ReconcileTwoControllersInput(CControllerState const& controllerA, CControllerState const& controllerB);
	void SetDrunkInputDelay(int delay);
	void StartShake(short time, unsigned char frequency, unsigned int arg2);
	void StartShake_Distance(short time, unsigned char frequency, float x, float y, float z);
	void StartShake_Train(float x, float y);
	// dummy function
	void ProcessPCSpecificStuff();
	void StopShaking(short arg0);
	static CPad* GetPad(int padNumber);
	short GetSteeringLeftRight();
	short GetSteeringUpDown();
	short GetPedWalkLeftRight();
	short GetPedWalkUpDown();
	bool GetLookLeft();
	bool GetLookRight();
	bool GetLookBehindForCar();
	bool GetLookBehindForPed();
	bool GetHorn();
	bool HornJustDown();
	bool GetHydraulicJump();
	short GetCarGunFired();
	short CarGunJustDown();
	short GetHandBrake();
	short GetBrake();
	bool GetExitVehicle();
	bool ExitVehicleJustDown();
	unsigned char GetMeleeAttack();
	unsigned char MeleeAttackJustDown();
	short GetAccelerate();
	bool GetAccelerateJustDown();
	bool NextStationJustUp();
	bool LastStationJustUp();
	bool CycleWeaponLeftJustDown();
	bool CycleWeaponRightJustDown();
	bool GetTarget();
	bool GetDuck();
	bool DuckJustDown();
	bool GetJump();
	bool JumpJustDown();
	bool GetSprint();
	bool SprintJustDown();
	bool ShiftTargetLeftJustDown();
	bool ShiftTargetRightJustDown();
	short GetDisplayVitalStats(CPed* ped);
	bool CollectPickupJustDown();
	bool GetForceCameraBehindPlayer();
	bool SniperZoomIn();
	bool SniperZoomOut();
	bool GetGroupControlForward();
	bool GetGroupControlBack();
	bool ConversationYesJustDown();
	bool ConversationNoJustDown();
	bool GroupControlForwardJustDown();
	bool GroupControlBackJustDown();
	void Clear(bool enablePlayerControls, bool resetPhase);
	void UpdatePads();
};
#pragma pack(pop)

VALIDATE_SIZE(CPad, 0x134);