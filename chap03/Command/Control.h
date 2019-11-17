#ifndef CONTROL_H
#define CONTROL_H
#include "Command.h"

class RemoteControl
{
	Command *slot;
public:
	RemoteControl(){}
	void setCommand(Command *command)
	{
		slot = command;
	}

	void buttonWasPressed(){
		slot->excute();
	}
};
#endif
