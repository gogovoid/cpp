#include <iostream>
using namespace std;
int q(int a, int b){
	if(b == 0) throw 0;
	return a / b;
}

int main(){
	int n1, n2, r;
	for(int k = 0; k < 4; k++){
		cin >> n1;
		cin >> n2;		
		try{
			cout << q(n1, n2) << "\n";
		} catch(int x){
			cout << "Can not divide by zero!" << endl;
		}
	}
	return 0;
}

