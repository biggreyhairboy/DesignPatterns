#ifndef INGREDIENTS_H 
#define INGREDIENTS_H 

#include "Ingredients.h"
#include <string>
#include <iostream>
using namespace std;

class Dough
{
public:
	Dough(){
		cout << "using default dough" << endl;
	}
};

class ThickCrustDough: public Dough
{
public:
	ThickCrustDough(){
		cout << "using thick curst dough" << endl;
	}
};

class ThinCrustDough: public Dough
{
public:
	ThinCrustDough(){
		cout << "using thin crust dough" << endl;
	}
};

class Sauce
{
public:
	Sauce(){
		cout << "using default suace" << endl;
	}
};

class PlumTomatoSauce: public Sauce
{
public:
	PlumTomatoSauce(){
		cout << "using plum tomato sauce" << endl;
	}	
};

class MarinaraSauce: public Sauce
{
public:
	MarinaraSauce(){
		cout << "using marinara sauce " << endl;
	}
};

class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory(){}
	virtual Dough createDough(){
		Dough adough;
		return adough;
	}
	virtual Sauce createSauce()
	{
		Sauce asauce;
		return asauce;
	}
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactory(){}
	Dough createDough(){
		return ThinCrustDough();
	}

	Sauce createSauce(){
		return MarinaraSauce();
	}
};

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory
{
public:
	ChicagoPizzaIngredientFactory(){}
	Dough createDough(){
		return ThickCrustDough();
	}

	Sauce createSauce(){
		return PlumTomatoSauce();
	}
};
#endif
