#include "BusterDrive.h"
#include "../RobotMap.h"
//#include "TripleDrive.h"
#include "../Commands/DriveWithJoysticks.h"

BusterDrive::BusterDrive()
	: Subsystem("BusterDrive")
		,LeftFrontDrive(1)
		,LeftRearDrive(2)
		,RightFrontDrive(3)
		,RightRearDrive(4)
//		,Left(new TripleDrive(LeftSpeedController1, LeftSpeedController2, LeftSpeedController3))
//		,Right(new TripleDrive(RightSpeedController1, RightSpeedController2, RightSpeedController3))
		,DriveTrain(LeftFrontDrive,RightFrontDrive,LeftRearDrive,RightRearDrive)

{

}

void BusterDrive::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoysticks());
	DriveTrain.SetSafetyEnabled(false);
}

void BusterDrive::TakeJoystickInputs(Joystick &left, Joystick &right)
{
	DriveTrain.TankDrive(left.GetRawAxis(1), right.GetRawAxis(5));
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

void BusterDrive::MecanumDrive(Joystick& left, Joystick& right,
		Joystick& slide) {
	DriveTrain.MecanumDrive_Cartesian(left.GetRawAxis(1), right.GetRawAxis(5),slide.GetRawAxis(0));
}
