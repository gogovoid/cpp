#include <iostream>
using namespace std;
int a = 1;
int f(){
	a = 2;
	return 5;
}
int main(){
	cout << a + f() << endl;
	return 0;
}
