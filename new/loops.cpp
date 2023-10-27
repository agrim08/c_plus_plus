#include <iostream>
using namespace std;

int main() {
	
	int  my_number[] = {4,5,6,7,8,9,0};
	
	int i = 0;
	
	while(i < 7){
		
		if(i == 3){
			cout << "special things" << endl;
		}
//		if(i == 3){
//			break;
//		}
		if(i == 3){
			i++;
			continue;
		}
		cout << "Current number is :" << my_number[i] << endl;
		i++;
		
		
		
	}
	cout << "end of loop :)";
	
	return 0;
}
