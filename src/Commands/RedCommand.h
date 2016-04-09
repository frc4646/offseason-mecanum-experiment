#ifndef RedCommand_H
#define RedCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class RedCommand: public CommandBase
{
public:
	RedCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
