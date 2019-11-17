#include "MallardDuck.cpp"

int main()
{
	MallardDuck* aMllardDuck = new MallardDuck(new Quack, new FlyWithWings);
	aMllardDuck->display();
	aMllardDuck->performQuack();
	aMllardDuck->setQuackBehavior(new MuteQuack);
	aMllardDuck->performQuack();
	delete aMllardDuck;
}

