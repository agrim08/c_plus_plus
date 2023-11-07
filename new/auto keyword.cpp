#include <iostream>
#include <string>
using namespace std;

string api_call(){
	return "an api is called";
}

int main(){
	string response = api_call();
	cout << "API called value: " << response << endl;
	
	if (typeid(response) == typeid(string)){
		cout << "both datatype matches";
	}
	return 0;	
} 
