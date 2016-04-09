#include "OI.h"
#include "Commands/RingWhileHeld.h"
#include "Commands/RingForTime.h"
#include "Commands/RedCommand.h"
#include "Commands/YellowCommand.h"
#include "Commands/GreenCommand.h"
#include "Commands/RingForCount.h"
#include "Commands/RingForSpeed.h"
#include "Commands/ArcadeDrive.h"

OI::OI():
	JoystickLeft(1),
	JoystickRight(2),
	Button1(&JoystickLeft, 1),
	Button2(&JoystickLeft, 2),
	Button3(&JoystickLeft, 3),
	Button4(&JoystickLeft, 4),
	Button5(&JoystickLeft, 5),
	Button6(&JoystickLeft, 6)
{
	// Process operator interface input here.
	Button1.WhileHeld(new ArcadeDrive());
	Button2.WhenPressed(new RingForCount(1));
	Button3.WhenPressed(new RingForCount(2));
	Button4.WhenPressed(new RingForCount(3));
	Button5.WhileHeld(new RingForSpeed(1));
	Button6.WhileHeld(new RingForSpeed(2));
}

Joystick& OI::GetLeftJoystick()
{
	return JoystickLeft;
}

Joystick& OI::GetRightJoystick()
{
	return JoystickRight;
}
