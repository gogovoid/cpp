#include <iostream>
using namespace std;
int sumOfSquare(int&, int&);
int main(){
	int x = 2;
	int y = 5;
	cout << sumOfSquare(x, x) << endl;
	cout << x << endl;
	cout << y << endl;
	return 0;
}

int sumOfSquare(int& n1, int& n2){
	cout << n1 << endl;
	cout << n2 << endl;
	n1 = n1 * n1;
	n2 = n2 * n2;
	return n1 + n2;
}
