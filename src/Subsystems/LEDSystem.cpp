#include "LEDSystem.h"
#include "../RobotMap.h"


LEDSystem::LEDSystem() :
		Subsystem("LEDSystem"),
		serialPort(9600)
{
	serialPort.SetFlowControl(SerialPort::kFlowControl_None);
	serialPort.SetWriteBufferMode(SerialPort::kFlushOnAccess);
	serialPort.SetWriteBufferSize(10);
	serialPort.Reset();
}

void LEDSystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void LEDSystem::setGreen() {
	serialPort.Write("g", 1);
}

void LEDSystem::setRed() {
	serialPort.Write("r", 1);
}

void LEDSystem::setYellow() {
	serialPort.Write("y", 1);
}

//void LEDSystem::sendLEDHeight() {
//}
// Put methods for controlling this subsystem
// here. Call these from Commands.
