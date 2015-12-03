#include <cmath>
#include "OI.h"

#include "Commands/Drive.h"
OI::OI()
{
	stick = new Joystick(0);
}

Joystick* OI::getJoystick(){
	return stick;
}

float OI::getMove() {
	return stick->GetRawAxis(LEFT_THUMB_JOYSTICK);
}

float OI::getTurn() {
	return stick->GetRawAxis(RIGHT_THUMB_JOYSTICK);
}
