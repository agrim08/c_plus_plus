//what is variadic:- https://en.cppreference.com/w/c/variadic#:~:text=Variadic%20functions%20are%20functions%20(e.g.,syntax%20and%20automatic%20argument%20conversions.

#include<iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t){
	cout << t << endl;
}

template <typename T, typename... Args>
void func(T t, Agrs... agrguments){
	cout << t << endl;
	func(agrs...);
}

int main(){
	
	string myName = "agrim";
	
	func(1);
	func(1,2,3.4, myName);
	
	return 0;
}
