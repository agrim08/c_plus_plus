#include <iostream>
using namespace std;

int main(){
	
	 bool isAdmin = true;
	 bool fbUser = true;
	 bool googleUser = false;
	 
	 if( (fbUser || googleUser) && isAdmin){
	 	cout << "Welcome Admin" << endl;
	 }else{
	 	cout << "No admin access" << endl;
	 	
	 }
	 
	 if(fbUser || googleUser){
	 	cout << "Welcome user" << endl;
	 }else{
	 	cout << "please login to continue" << endl;
	 }
	 
	 return 0;
}
