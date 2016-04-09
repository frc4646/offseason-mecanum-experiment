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
	void MecanumDrive(Joystick& left, Joystick& right, Joystick& twist);
	double GetHeading();
	void ResetGyro();
private:
	Talon LeftFrontDrive;
	Talon LeftRearDrive;
	Talon RightFrontDrive;
	Talon RightRearDrive;
//	DriveSystem Left;
//	DriveSystem Right;
	RobotDrive DriveTrain;
	Gyro gyro;
};

#endif
