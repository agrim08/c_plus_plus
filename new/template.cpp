#include <iostream>
using namespace std;

template<typename T>

T addme(T a, T b){
	return a + b;
}
int main(){
	int v1 = 4;
	int v2 = 3;
	float v3 = 5.6;
	float v4 = 5.5;
	
	cout << addme(v1, v2) << endl;
	cout << addme(v3, v4) << endl;
	
	return 0;
}


