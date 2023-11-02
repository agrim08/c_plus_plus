#include <iostream>
using namespace std;

int main(){
	 char name[] = "agrim";
	 char my_name[] = {'a' , 'g', 'r', 'i', 'm', 0};
	 
	 for(int i = 0; name[i]; i++){
	 	cout << "Character is:" << name[i] << endl;
	 }
	 
	 cout << "take a break \n";
	 for(char * cp = name; *cp != 0; cp++){
	 	cout << "character is: " << *cp << endl;
	 }
	 
	 cout << "take a break \n";
	 for(char i:name){
	 	if(i==0)break;
	 	cout << "char is:" << i << endl;
	 }
	
	return 0;
}
