#include <iostream>
#inlcude <string>
using namespace std;

class Phone{
	string _name = "";
	string _os = "";
	int _price = 0;
	
public:
	Phone(); //default constructor
	Phone(const string & name, const string &os, const int &price);//parameter constructor
	
};

