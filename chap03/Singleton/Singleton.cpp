#include <iostream>
#include <string>
using namespace std;

class Singleton
{
public:
	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
	}

	Singleton(Singleton const&) = delete;
	void operator=(Singleton const&) = delete;
private:
	Singleton(){}
};
