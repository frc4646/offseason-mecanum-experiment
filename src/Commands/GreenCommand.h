#ifndef GreenCommand_H
#define GreenCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class GreenCommand: public CommandBase
{
public:
	GreenCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
