#include <iostream>
using namespace std;

int f2(int yy){
	int z;
	cout << "f2() is running...\n";
	return 2;
}

int f1(int xx){
	int y;
	cout << "f1() start\n";
	f2(y);
	cout << "f1() end\n";
	return 1;
}

int main(){
	int x;
	//int s;
	//double d[s];
	cout << "main start\n";
	f1(x);
	cout << "main end\n";
	return 0;
}

