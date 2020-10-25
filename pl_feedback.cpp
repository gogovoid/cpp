#include <iostream>
using namespace std;
void CallByPointer(short* size){
	cout << sizeof(size) << endl;
}
void CallByReference(short& size){
//void CallByReference(short* size){
	cout << sizeof(size) << endl;
//	cout << sizeof(*size) << endl;
}
int main(){
	short s;
	cout << sizeof(int) << endl;
	cout << "===========" << endl;
	CallByPointer(&s);
	cout << "===========" << endl;
	CallByReference(s);
	//CallByReference(&s);
	return 0;
}

