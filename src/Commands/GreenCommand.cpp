#include "GreenCommand.h"

GreenCommand::GreenCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::ledSystem);
}

// Called just before this Command runs the first time
void GreenCommand::Initialize()
{
	ledSystem->setGreen();
}

// Called repeatedly when this Command is scheduled to run
void GreenCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool GreenCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void GreenCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GreenCommand::Interrupted()
{
	End();
}
