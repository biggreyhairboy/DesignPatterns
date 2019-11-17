#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <vector>
#include "Ingredients.h"
using namespace std;

class Pizza
{
public:
	string name;
	Dough dough;
	Sauce sauce;
public:
	Pizza(){}
	virtual void prepare(){
		cout << "tossing dough..." << endl;
		cout << "adding sauce..." << endl;
	}
	virtual void bake(){
		cout << "bake for 25 minutes" << endl;
	}
	virtual void cut(){
		cout << "cuttting pizza into diagonal slices" << endl;
	}
	virtual void box(){
		cout << "place pizza into official boxes" << endl;
	}
};

class CheesePizza: public Pizza
{
public:
	//CheesePizza(){}
	PizzaIngredientFactory ingredientFactory;
	CheesePizza(PizzaIngredientFactory ingredientFactory)
	{
		this->ingredientFactory = ingredientFactory;
	}
	void prepare()
	{
		cout << "preparing " + name << endl;
		dough = ingredientFactory.createDough();
		sauce = ingredientFactory.createSauce();
	}
};

class VeggiePizza: public Pizza
{
public:
	//VeggiePizza(){}
	PizzaIngredientFactory ingredientFactory;
	VeggiePizza(PizzaIngredientFactory ingredientFactory)
	{
		this->ingredientFactory = ingredientFactory;
	}
	void prepare()
	{
		cout << "preparing " + name << endl;
		dough = ingredientFactory.createDough();
		sauce = ingredientFactory.createSauce();
	}
};

#endif
