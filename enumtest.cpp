#include <iostream>
using namespace std;
/*
namespace freshman {
	enum Cplusplus { PASS, FAIL };
}
namespace sophomore {
	enum Java { PASS, FAIL };
}
*/
enum Cplusplus { PASS, FAIL };// C++11
enum class Java { PASS, FAIL };
int main(){
	Cplusplus c = Cplusplus::PASS;

	switch (c){
		case 0:
			cout << "합격!" << "\n";
			break;
		case Cplusplus::FAIL:
			cout << "재수강!" << "\n";
			break;
	}
	return 0;
}
