#include "Duck.cpp"

class MallardDuck: public Duck
{
public:
	MallardDuck(QuackBehavior *qb, FlyBehavior *fb)
	{
		quackBehavior = qb;
		flyBehavior = fb;
	}
	MallardDuck(){}
	void display()
	{
		cout << "this is a mallard duck" << endl;
	}

	void swim()
	{
		cout << "mallard is swimming" << endl;
	}
};
