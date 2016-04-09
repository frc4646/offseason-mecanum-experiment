#ifndef RingForSpeed_H
#define RingForSpeed_H

#include "../CommandBase.h"
#include "WPILib.h"

class RingForSpeed: public CommandBase
{
public:
	RingForSpeed(double ringsPerSecond);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	PIDController pid;
};

#endif
