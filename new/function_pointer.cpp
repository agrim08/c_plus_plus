#include <iostream>
using namespace std;

int getTwo(){
	return 2;
}
void interesting(){
	cout << "this is functional pointer" << endl;
}
int main(){
	int whatIgot = getTwo();
	cout << whatIgot << endl;
	
	void (*pointstoInteresting)() = interesting;
	pointstoInteresting(); //we here are using pointer like a function.
	(*pointstoInteresting)();
	
	//both above ways are same you can choose one :)
	
	return 0;
}
