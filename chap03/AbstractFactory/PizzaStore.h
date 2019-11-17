#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
#include "Ingredients.h"

class PizzaStore
{
public:
	PizzaStore(){}
	Pizza orderPizza(string type){
		Pizza pizza;
		pizza = createPizza(type);
		pizza.prepare();
		pizza.bake();
		pizza.cut();
		pizza.box();
		return pizza;
	}
	virtual Pizza createPizza(string type)
	{
		cout << "create default pizza" << endl;
		Pizza aPizza;
		return aPizza;
	}
};

class NYStylePizzaStore : public PizzaStore
{
public:
	NYStylePizzaStore(){
		this->ingredientFactory = NYPizzaIngredientFactory();
		cout << "create NYStylePizzaStore " << endl;
	}
	PizzaIngredientFactory ingredientFactory; 
	Pizza createPizza(string type) override 
	{
		Pizza aPizza;
		cout << "create " + type + "flavor" << endl;
		if(type == "cheese"){
			aPizza = CheesePizza(ingredientFactory);
		} else if(type == "veggie"){	
			aPizza = VeggiePizza(ingredientFactory); 
		}
		return aPizza;
	}
};

class ChicagoStylePizzaStore: public PizzaStore
{
public:
	PizzaIngredientFactory ingredientFactory;
	ChicagoStylePizzaStore()
	{
		this->ingredientFactory = ChicagoPizzaIngredientFactory();
	}
	Pizza createPizza(string type) override	
	{
		Pizza aPizza;
		cout << "create " + type + "flavor" << endl;
		if(type == "cheese"){
			aPizza = CheesePizza(ingredientFactory);
		} else if(type == "veggie")
		{
			aPizza = VeggiePizza(ingredientFactory); 
		}
		return aPizza;
	}
};
#endif
