#ifndef BellSystem_H
#define BellSystem_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../CounterPIDSource.h"

class BellSystem: public Subsystem
{
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	BellSystem();
	void InitDefaultCommand();
	void Ring();
	void Stop();
	Counter & GetEncoder();
	SpeedController& GetController();
	CounterPIDSource& GetEncoderPIDSource();
private:
	Victor BellController;
	Counter encoder;
	CounterPIDSource counter;
};

#endif
