#include <iostream>
using namespace std;
class Pl {
	int x;
public:
	Pl() { cout << "Constructor\n"; }
	~Pl() { cout << "Destructor\n"; }
};

void f2(int n1, int n2){
	string e = "Divide by Zero Error!";
	if(n2 == 0) throw e;
	cout << n1/n2 << endl;
}

void f1(const string& e){
	Pl pl;
	f2(9, 0);
}

int main(){
	try {
		string s = "PL";
		f1(s);
	} catch (const string& err){
	//} catch (int code_no){
		cout << err << "\n";
	}
	cout << "Bye~\n";

	return 0;
}

