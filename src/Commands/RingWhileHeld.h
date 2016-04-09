#ifndef RingWhileHeld_H
#define RingWhileHeld_H

#include "../CommandBase.h"
#include "WPILib.h"

class RingWhileHeld: public CommandBase
{
public:
	RingWhileHeld();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
