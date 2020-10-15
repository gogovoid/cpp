#include <iostream>
using namespace std;

int sub(int a, int b){
	return a - b;
}
int main(){
	int a = 7;
	int r = sub(a, ++a);

	cout << r << "\n";
}
