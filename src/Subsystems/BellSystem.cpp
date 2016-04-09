#include "BellSystem.h"
#include "../RobotMap.h"

BellSystem::BellSystem() :
		Subsystem("BellSystem")
		, BellController(6)
		, encoder(9)
		, counter(encoder, 1/(71*7.0))
{
	encoder.Reset();
//	encoder.SetPIDSourceParameter(PIDSource::kRate);
//	encoder.SetDistancePerPulse(1/(71*7.0));
}

void BellSystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void BellSystem::Ring() {
	BellController.Set(.2);
}

void BellSystem::Stop() {
	BellController.Set(0);
}

Counter& BellSystem::GetEncoder() {
	return encoder;
}

SpeedController& BellSystem::GetController() {
	return BellController;
}

CounterPIDSource& BellSystem::GetEncoderPIDSource()
{
	return counter;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
