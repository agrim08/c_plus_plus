// Note: The switch expression should evaluate to either integer or character. 
// It cannot evaluate any other data type.

#include <iostream>
using namespace std;

int main() {
	
	int rating;
	cin >> rating;
	
	switch(rating) {
		case 1:
			cout << "rated as 1 star";
			break;
		case 2:
			cout << "rated as 2 star";
			break;
		case 3:
			cout << "rated as 3 star";
			break;
		case 4:
			cout << "rated as 4 star";
			break;
		case 5:
			cout << "rated as 5 star";
			break;
			
		default:
			cout << "please rate only in between 1 to 5";
			break;
	}
}
