#include <iostream>
using namespace std;

enum MsOffice {
//	BOLD,
	BOLD = 5,
	ITALICS,
	UNDERLINES,
	CROSSED
};

int main(){
//	int myAttribute = BOLD;
//	int myAttribute = UNDERLINES;
	int myAttribute = UNDERLINES;
	cout << myAttribute << endl;
	
	
	return 0;
}
