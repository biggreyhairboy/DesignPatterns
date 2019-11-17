#include <iostream>
#include <string>
#include "Control.h"
#include "Command.h"

using namespace std;
int main()
{
	RemoteControl rt = RemoteControl();
   	Light alight = Light();
	LightOnCommand *lightOn = new LightOnCommand(alight);

	rt.setCommand(lightOn);
	rt.buttonWasPressed();
}
