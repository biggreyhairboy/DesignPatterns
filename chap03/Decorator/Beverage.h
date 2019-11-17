#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>
#include <iostream>
using namespace std;

class Beverage
{
public:
	string description = "Unknow beverage";
	virtual string getDescription()
	{
		return description;
	}
	
	virtual double cost(){
		return 0;
	}
};

class CondimentDecorator: public Beverage
{
public:
	virtual string getDescription(){
		return description;
	}
};

class Espresso: public Beverage
{
public:
	Espresso(){
		description = "Espresso";
	}

	virtual double cost(){
		return 1.99;
	}
};

class HouseBlend: public Beverage
{
public:
	HouseBlend(){
		description = "House Blenad Coffee";
	}

	virtual double cost(){
		return 0.89;
	}
};

#endif
