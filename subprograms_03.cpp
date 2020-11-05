#include <iostream>
#include <cstdlib>
using namespace std;

void out(int s[], int n){
	for(int i = 0; i < n; i++)
		cout << s[i] << ((i == n-1) ? "\n" : " ");
}

int comp(const void* n1, const void* n2){
	int a = *(int*)n1;
	int b = *(int*)n2;
	//return a - b; // asc
	return b - a; // desc
}

int main(){
	int scores[] = { 66, 22, 0, 33, 88, 11 };
	int len = sizeof(scores) / sizeof(*scores);

	out(scores, len);
	qsort(&scores[0], len, sizeof(*scores), comp); 
	out(scores, len);
	return 0;
}

