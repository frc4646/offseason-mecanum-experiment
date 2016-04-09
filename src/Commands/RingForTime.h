#ifndef RingForTime_H
#define RingForTime_H

#include "../CommandBase.h"
#include "WPILib.h"

class RingForTime: public CommandBase
{
public:
	RingForTime(double seconds);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
