#include "biggest.h"
#include <limits>
Biggest::Biggest()
{
	current = numeric_limits<int>::min();
}
int Biggest::operator()(int next)
{
	if(next > current) current = next;
	return current;
}
