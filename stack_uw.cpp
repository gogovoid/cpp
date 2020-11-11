#include <iostream>
using namespace std;

void f1(int n1, int n2){
	string e = "Divide by Zero Error!";
	if(n2 == 0) throw e;
	cout << "f1() start\n";
}

int main(){
	try {
		f1(9, 0);
	//} catch (const string& err){
	} catch (int code_no){
		cout << code_no << "\n";
	}
	return 0;
}

