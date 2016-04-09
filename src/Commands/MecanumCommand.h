#ifndef MecanumCommand_H
#define MecanumCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class MecanumCommand: public CommandBase
{
public:
	MecanumCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
