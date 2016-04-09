#ifndef TRIPLE_DRIVE_H
#define TRIPLE_DRIVE_H

#include "BusterDrive.h"
#include "WPILib.h"
#include "DriveSystem.h"

class TripleDrive : public DriveSystem
{

public:
	TripleDrive(SpeedController & one, SpeedController & two, SpeedController & three);

	virtual void PIDWrite(float output);

	virtual void Set(float speed, uint8_t syncGroup=0);
	
	virtual float Get();

	virtual void Disable();
	
private:
	SpeedController & One;
	SpeedController & Two;
	SpeedController & Three;
};


#endif
