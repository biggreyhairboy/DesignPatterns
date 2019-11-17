#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <string>
#include "Equipments.h"

using namespace std;
class Command
{
public:
	virtual ~Command(){}
	virtual void excute() = 0;
protected:
	Command(){}
};

class LightOnCommand: public Command
{
public:
	Light light;
	LightOnCommand(Light &light){
		this->light = light;
	}

	void excute(){
		light.on();
	}
};
#endif
