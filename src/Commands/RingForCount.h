#ifndef RingForCount_H
#define RingForCount_H

#include "../CommandBase.h"
#include "WPILib.h"

class RingForCount: public CommandBase
{
public:
	RingForCount(int count);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int Count;
};

#endif
