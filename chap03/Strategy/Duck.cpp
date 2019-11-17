#include <iostream>
using namespace std;

class FlyBehavior;
class QuackBehavior;
class Duck;
class FlyWithWings;
class FlyNoWay;
class Quack;
class Squeak;
class MuteQuack;
class QuackBehavior
{
public:
	virtual void quack() = 0;
protected:
	QuackBehavior(){}
};

class Quack: public QuackBehavior
{
public:
	Quack(){}
	void quack() override
	{
		cout << "duck quacking" << endl;
	}
};

class Squeak: public QuackBehavior
{
public:
	Squeak(){}
	void quack() override
	{
		cout << "duck Squeaking" << endl;
	}
};

class MuteQuack: public QuackBehavior
{
public:
	MuteQuack(){}
	void quack() override
	{
		cout << "duck mute quacking" << endl;
	}
};

class FlyBehavior
{
public:
	virtual void fly() = 0;
protected:
	FlyBehavior(){}
};

class FlyWithWings: public FlyBehavior
{
public:
	FlyWithWings(){}
	void fly() override
	{
		cout << "flying" << endl;
	}
};

class FlyNoWay: public FlyBehavior
{
public:
	FlyNoWay(){}
	void fly() override
	{
		cout << "not flying" << endl;
	}
};

class Duck
{
public:
	Duck(QuackBehavior *qb, FlyBehavior *fb)
	{
		quackBehavior = qb;
		flyBehavior = fb;
	}	
	Duck(){}
	void performQuack()
	{
		quackBehavior->quack();
	}
	void performFly()
	{
		flyBehavior->fly();
	}
	virtual void swim()
	{
		cout << "duck is swimming" << endl;
	}
	virtual void display()
	{
		cout << "this is a duck" << endl;
	}	

	void setQuackBehavior(QuackBehavior* qb)
	{
		quackBehavior = qb;	
	}
	
	void setFlyBehavior(FlyBehavior* fb)
	{
		flyBehavior = fb;
	}
	QuackBehavior *quackBehavior;
	FlyBehavior *flyBehavior;
};
