#ifndef YellowCommand_H
#define YellowCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class YellowCommand: public CommandBase
{
public:
	YellowCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
