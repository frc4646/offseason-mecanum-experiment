#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/BusterDrive.h"
#include "Subsystems/BellSystem.h"
#include "OI.h"
#include "WPILib.h"
#include "Subsystems/DistanceSensor.h"
#include "Subsystems/LEDSystem.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(char const *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem *examplesubsystem;
	static BusterDrive *busterDrive;
	static BellSystem *bellSystem;
	static OI *oi;
	static DistanceSensor *distSensor;
	static LEDSystem *ledSystem;
};

#endif
