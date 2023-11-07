#include <iostream>
//#include "adder.h"
using namespace std;

//void lifeUp(int *xyz){
//	++(*xyz);
//}
//
//int main(){
//	int life = 3;
//	lifeUp(&life);
//	cout << life << endl;
//	return 0;
//} 

void lifeUp(int &life){
	++life;
}

int addme(int a, int b){
	return a + b;
}

float addme(float a, float b){
	return a + b;
}
int main(){
	

	int life = 3;
	lifeUp(life);
	cout << life << endl;
	
	int v1 = 2;
	int v2 = 3;
	float v3 = 5.6;
	float v4 = 5.5;
	
	cout << addme(v1, v2) << endl;
	cout << addme(v3, v4) << endl;
	
	return 0;
}  














