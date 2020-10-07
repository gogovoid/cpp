#include <iostream>

int i=0;

int main(){
	int i=5;
	::i++;
	std::cout << ::i << "\n";
	return 0;
}
