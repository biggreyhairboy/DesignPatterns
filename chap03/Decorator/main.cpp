#include <iostream>
#include "Beverage.h"
#include "flavors.h"

using namespace std;

int main()
{
	Beverage *beverage = new Espresso();
	beverage = new Mocha(beverage);
	beverage = new Whip(beverage);
	cout << beverage->getDescription() + " $" << beverage->cost() << endl;

	Beverage *beverage2 = new HouseBlend();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);	
	cout << beverage2->getDescription() + " $" << beverage2->cost() << endl;	
}
