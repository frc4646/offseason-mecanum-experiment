#ifndef DriveForTime_H
#define DriveForTime_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForTime: public CommandBase
{
public:
	DriveForTime(double time);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
