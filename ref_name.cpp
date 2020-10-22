#include <iostream>
using namespace std;
void s(int& x, int& y){
	int t;
	t = x;
	x = y;
	y = t;
	/*
	 * int t;
	 * t = k;
	 * k = test[k]
	 * test[k] = t;
	 */
}

int main(){
	int test[5] = { 1, 2, 3, 4, 5 };
	int k = 0;
	s(k, test[k]);
	cout << k << ", " << test[k] << endl;
	//cout << test[0] << endl;
	return 0;
}

