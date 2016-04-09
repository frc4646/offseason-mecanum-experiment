#include "TripleDrive.h"

TripleDrive::TripleDrive(SpeedController & one, SpeedController & two, SpeedController & three)
: One(one)
, Two(two)
, Three(three)
{
	
}

void TripleDrive::PIDWrite(float output)
{
	One.PIDWrite(output);
	Two.PIDWrite(output);
	Three.PIDWrite(output);
}

void TripleDrive::Set(float speed, uint8_t syncGroup)
{
	One.Set(speed, syncGroup);
	Two.Set(speed, syncGroup);
	Three.Set(speed, syncGroup);
}

float TripleDrive::Get()
{
	return One.Get();
}

void TripleDrive::Disable()
{
	One.Disable();
	Two.Disable();
	Three.Disable();
}

