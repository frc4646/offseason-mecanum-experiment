#include "BusterDrive.h"
#include "../RobotMap.h"
//#include "TripleDrive.h"
#include "../Commands/DriveWithJoysticks.h"

BusterDrive::BusterDrive()
	: Subsystem("BusterDrive")
		,LeftDrive(1)
		,RightDrive(2)
//		,Left(new TripleDrive(LeftSpeedController1, LeftSpeedController2, LeftSpeedController3))
//		,Right(new TripleDrive(RightSpeedController1, RightSpeedController2, RightSpeedController3))
		,DriveTrain(LeftDrive,RightDrive)

{

}

void BusterDrive::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoysticks());
}

void BusterDrive::TakeJoystickInputs(Joystick &left, Joystick &right)
{
	DriveTrain.TankDrive(left, right);
}

void BusterDrive::Stop()
{
	DriveTrain.Drive(0,0);
}

void BusterDrive::Drive(double speed, double curve)
{
	DriveTrain.Drive(speed, curve);
}

void BusterDrive::ArcadeDrive(Joystick& left) {
	DriveTrain.ArcadeDrive(left);
}
