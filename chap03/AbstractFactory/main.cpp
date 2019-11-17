#include <iostream>
#include "PizzaStore.h"
#include "Pizza.h"
#include "Ingredients.h"
#include <memory>
using namespace std;

int main()
{
	shared_ptr<PizzaStore> nyPizzaStore = make_shared<NYStylePizzaStore>();
	//PizzaStore *nyPizzaStore = new NYStylePizzaStore();
	Pizza aPizza = nyPizzaStore->orderPizza("veggie");
}
