#include <iostream>
#include <cstring>
using namespace std;
void test(const string& name, int age=0){
	cout << name << endl;
	cout << age << endl;
}

int main(){
	char s[5] = "inha";
	char d[5];

	string n("inha");
	int a = 99;
	test(n);
	test(n, a);
	test("harvard", 100);
	//strcpy(d, s); // 첫번째 인자가 destination, 두번째 인자가 source
	// strcpy(source=s, destination=d);
	cout << d << endl;
	return 0;
}

