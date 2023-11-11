#include <iostream>
#define NULL 0 //this is not the correct way of doing or preventing errors
using namespace std;

void printme(int a){
	cout << "The integer value is " << a << endl;
}
void printme(double a){
	cout << "The double value is " << a << endl;
}
void printme(int *a){
	cout << "The integer value is " << a << endl;
//	printf("pointer value is %p\n", a);
}

int main(){
	printme(NULL);
	printme(nullptr); //this is correct way :)
	printme(5);
	return 0;
}
