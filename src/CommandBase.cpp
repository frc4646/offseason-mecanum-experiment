#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
BusterDrive* CommandBase::busterDrive = NULL;
BellSystem* CommandBase::bellSystem = NULL;
DistanceSensor* CommandBase::distSensor = NULL;
LEDSystem* CommandBase::ledSystem = NULL;

OI* CommandBase::oi = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	busterDrive = new BusterDrive();
	bellSystem = new BellSystem();
	distSensor = new DistanceSensor();
	ledSystem = new LEDSystem();
	oi = new OI();
	SmartDashboard::PutData(bellSystem);
	SmartDashboard::PutData(busterDrive);
	SmartDashboard::PutData(distSensor);
	SmartDashboard::PutData(ledSystem);
}
