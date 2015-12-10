#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* stick;
	static const int RIGHT_THUMB_JOYSTICK = 4; // drives forward and backward
	static const int LEFT_THUMB_JOYSTICK = 2; //turns left and right
	static const int RIGHT_TRIGGER = 3;
	static const int LEFT_TRIGGER = 3;
	static const int BUTTON_Y = 4;
	static const int BUTTON_B = 2;
	static const int BUTTON_A = 1;
	static const int BUTTON_X = 3;
public:
	OI();
	Joystick* getJoystick();
	float getMove();
	float getTurn();
};

#endif
