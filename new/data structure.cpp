#include <iostream>
using namespace std;

struct User{
	const int uId;
	const char *name;
	const char *email;
	int course_count;
};

int main(){
	 User Agrim = {001, "Agrim", "agrimxyz@gmail.com",2};
	 User Neha = {002, "neha", "nehaxyz@gmail.com",3};
	 
	 User *n = &Neha;
	 
	 
	 cout << Neha.email << endl;
	 Neha.email = "abc@gmail.com";
	 cout << Neha.email << endl;
	 
	 Neha.course_count = 4;
	 cout << Neha.course_count << endl;
//Note that despite using const we can still change email
//because we had make only the pointer as constant and not the whole variable. :)
	 
// to access *n there is a new synatax:
	 cout << n->name << endl;
	 n->course_count = 12;
	 cout << n->course_count;
	 
	 return 0;	 
}
