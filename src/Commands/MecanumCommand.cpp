#include "MecanumCommand.h"
#include "../Subsystems/BusterDrive.h"

MecanumCommand::MecanumCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(busterDrive);
}

// Called just before this Command runs the first time
void MecanumCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MecanumCommand::Execute()
{
	busterDrive->MecanumDrive(oi->GetLeftJoystick(), oi->GetLeftJoystick(),oi->GetLeftJoystick());
}

// Make this return true when this Command no longer needs to run execute()
bool MecanumCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MecanumCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MecanumCommand::Interrupted()
{
	busterDrive->Stop();
}
