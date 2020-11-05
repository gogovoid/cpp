#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

class {
	public:
		bool operator()(int i, int j) const { return i < j; }
} customless;

void out(int s[], int n){
	for(int i = 0; i < n; i++)
		cout << s[i] << ((i == n-1) ? "\n" : " ");
}

int main(){
	int scores[] = { 66, 22, 0, 33, 88, 11 };
	int len = sizeof(scores) / sizeof(*scores);

	out(scores, len);
	//sort(scores, scores + len - 2, less<int>());
	//sort(scores, scores + len);
	//sort(scores, scores + len, customless);
	sort(scores, scores + len, [](int i, int j){
			return i > j;
			});
	out(scores, len);
	return 0;
}

