#include <iostream>
using namespace std;

int main() {
	
	printf("Float size is %ld bits \n", sizeof(long double) * 8);
	
	float my_value = 20.2+20.2;
	printf("my value is %f in float \n ", my_value);
	
	if(my_value == 20.00001){
		cout << "you got it right";
	}else{
		cout << "something";
	}
	
	return 0;
}

//this means float does not give much precision so try to avoid using it :(
