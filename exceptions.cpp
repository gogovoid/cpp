#include <iostream>
using namespace std;

int main(){
	int n1, n2, r;
	for(int k = 0; k < 4; k++){
		cin >> n1;
		cin >> n2;
		if(n2 == 0){
			cout << "Can not divide by zero!" << endl;
		}else{
			r = n1 / n2;
			cout << r << "\n";
		}
	}
	return 0;
}

