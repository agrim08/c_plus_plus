#include <iostream>
using namespace std;

int main(){
	
	int rating = 4;
	
	if(rating == 5) {
		cout << "5 star rated \n";
}

	else if (rating == 4) {
		cout << "4 star rating \n";
	}
	
	else{
		cout << "not a 5 star rating \n";
	}
	
	printf("Your rating feedback is %s \n", rating > 4 ? 
	"true block" : "false block");
	
	return 0;
}

