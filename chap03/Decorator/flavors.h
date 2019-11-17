#ifndef FLAVOR_H
#define FLAVOR_H
#include "Beverage.h"

class Mocha: public CondimentDecorator
{
	Beverage *beverage;
public:
	Mocha(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string getDescription(){
		return beverage->getDescription() + ", Mocha";
	}

	double cost()
	{
		return 0.20 + beverage->cost();
	}
};

class Whip: public CondimentDecorator
{
	Beverage *beverage;
public:
	Whip(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	string getDescription(){
		return beverage->getDescription() + ", Whip";
	}

	double cost(){
		return 0.10 + beverage->cost();
	}
};
#endif
