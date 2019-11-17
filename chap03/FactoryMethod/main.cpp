#include <iostream>
#include "Pizza.cpp"
using namespace std;

int main()
{
	PizzaStore nyPizzaStore = NYStylePizzaStore();
	Pizza aPizza = nyPizzaStore.OrderPizza("cheese");
	cout << "ordered a cheese pizza from ny style pizza store" << endl;	

}
