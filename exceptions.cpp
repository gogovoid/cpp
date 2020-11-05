#include <iostream>
using namespace std;
/*
int q(int a, int b){
	if(b == 0) return -1;
	return a / b;
}
*/

int main(){
	int n1, n2, r;
	for(int k = 0; k < 4; k++){
		cin >> n1;
		cin >> n2;		
		try{
			if(n2 == 0){
				throw 0;
			}
			r = n1 / n2;
			cout << r << "\n";
		} catch(int x) {
			cout << "Can not divide by zero!" << endl;
		}
	}
/*
	for(int k = 0; k < 4; k++){
		cin >> n1;
		cin >> n2;		
		r = q(n1, n2);
		if(r == -1){
			cout << "Can not divide by zero!" << endl;
		}else{
			cout << r << "\n";
		}
	}
	*/
	return 0;
}

