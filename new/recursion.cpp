#include<iostream>
int factorial(int n);

int main(){
	
	int n;
	
	std::cout << "Enter a value: ";
	std::cin >> n;
	
	std::cout<< "Your result for factorial is: "<< factorial(n) << std::endl;
	return 0;
}
int factorial(int n){
	
	//n * factorial(n-1); this func will keep on running so we have to find an exit strategy..
	if (n > 1){
		return n * factorial(n-1);
	}else{
		return 1;
	}
}
