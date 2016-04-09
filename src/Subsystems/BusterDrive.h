#ifndef BusterDrive_H
#define BusterDrive_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
//#include "DriveSystem.h"

class BusterDrive: public Subsystem
{
public:
	BusterDrive();
	void InitDefaultCommand();
	void TakeJoystickInputs(Joystick &left, Joystick &right);
	void Drive(double speed, double curve);
	void ArcadeDrive(Joystick& left);
	void Stop();
private:
	Talon LeftDrive;
	Talon RightDrive;
//	DriveSystem Left;
//	DriveSystem Right;
	RobotDrive DriveTrain;
};

#endif
