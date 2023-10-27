#include <iostream>
using namespace std;

int main() {
	
	int integer_array[4] = {1,2,3,4};
	cout << integer_array[0] << endl;
//	cout << integer_array << endl; //memory address.
	
	int another_array[4];
	another_array[0] =9;
	another_array[1] = 19;
	cout << another_array[0] <<endl;
//	cout << another_array[1] <<endl;
	
	*another_array = 29;
	 cout << another_array[0] <<endl;
	
	cout << another_array[1] <<endl;
	int *ap = another_array;
	ap++;
	*ap = 209;
	cout << another_array[1] <<endl;
	
	
	return 0;
}
