#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SimplePizzaFactory;
class CheesePizza;
class VeggiePizza;
class ClamPizza;
class PepperoniPizza;

class Pizza
{
public:
	string name;
	string dough;
	string sauces;
	vector<string> toppings;
public:
	Pizza(){}
	//Pizza(string ingred)
	//{
	//	ingrediants = ingred;
	//}
	virtual void prepare(){
		cout << "tossing dough..." << endl;
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

class NYStyleCheesePizza: public Pizza
{
public:
	NYStyleCheesePizza(){
		name = "NY style Cheese Pizza";
		dough = "Thin Crust Dough";
		sauces = "Marinara Sauce";
		toppings.push_back("Grated reggiano cheese");	
	}
};

class NYStyleVeggiePizza: public Pizza
{
public:
	NYStyleVeggiePizza(){}
};

class ChicagoStyleCheesePizza: public Pizza
{
public:
	ChicagoStyleCheesePizza(){
		name = "Chicago Style Deep Dish Cheese Pizza";
		dough = "Extra thick crust dough";
		sauces = "Plum Tomato saurce";
		toppings.push_back("Shredded Mozzarella Cheese");
	}

	void cut(){
		cout << "cutting into square slices" << endl;
	}
};

class ChicagoStyleVeggiePizza: public Pizza
{
public:
	ChicagoStyleVeggiePizza(){}
};

class SimplePizzaFactory
{
public:
	SimplePizzaFactory(){}
	Pizza createPizza(string type){
		Pizza apizza;
		return apizza;	
	}
};

class PizzaStore
{
public:
	PizzaStore(){}
	virtual	Pizza OrderPizza(string type){
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
		Pizza aPizza;
		return aPizza;
	}
};

class NYStylePizzaStore : public PizzaStore
{
public:
	NYStylePizzaStore(){}
	Pizza createPizza(string type)
	{
		Pizza aPizza;
		if(type == "cheese"){
			aPizza = NYStyleCheesePizza();
		} else if(type == "veggie"){	
			aPizza = NYStyleVeggiePizza(); 
		}
		return aPizza;
	}
};

class ChicagoStylePizzaStore: public PizzaStore
{
public:
	Pizza createPizza(string type)
	{
		Pizza aPizza;
		if(type == "cheese"){
			aPizza = ChicagoStyleCheesePizza();
		} else if(type == "veggie")
		{
			aPizza = ChicagoStyleVeggiePizza(); 
		}
		return aPizza;
	}
};
