#include <iostream>
using namespace std;

int main() {
	
	int rating;
	cout << "enter the rating: " << endl;
	cin >> rating;
	
	if(rating == 1) {
		cout << "Your rating is bad";
	}
	else if(rating == 2) {
		cout << "Your rating is average";
	}
	else if(rating == 3) {
		cout << "Your rating is good";
	}
	else if(rating == 4) {
		cout << "Your rating is excelent";
	}
	else if(rating == 5) {
		cout << "Your rating is wonderful";
	}
	else {
		cout << "please enter rating only in between 1 to5"; 
	}
	
	return 0;
}
