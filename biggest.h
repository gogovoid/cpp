#ifndef BIGGEST_H
#define BIGGEST_H
#include <iostream>
using namespace std;
//class Biggest;
class Biggest
{
	private:
		int current;
	public:
		Biggest();
		int operator()(int next);
};
#endif

