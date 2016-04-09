#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
public:
	OI();
	Joystick& GetLeftJoystick();
	Joystick& GetRightJoystick();
private:
	Joystick JoystickLeft;
	Joystick JoystickRight;
	JoystickButton Button1;
	JoystickButton Button2;
	JoystickButton Button3;
	JoystickButton Button4;
	JoystickButton Button5;
	JoystickButton Button6;

};

#endif
