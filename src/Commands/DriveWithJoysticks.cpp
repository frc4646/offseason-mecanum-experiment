#include "DriveWithJoysticks.h"
#include "../Subsystems/BusterDrive.h"

DriveWithJoysticks::DriveWithJoysticks()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::busterDrive);
}

// Called just before this Command runs the first time
void DriveWithJoysticks::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoysticks::Execute()
{
	busterDrive->TakeJoystickInputs(oi->GetLeftJoystick(), oi->GetRightJoystick());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoysticks::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveWithJoysticks::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoysticks::Interrupted()
{

}
