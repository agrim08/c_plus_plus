#include <iostream>
using namespace std;

int main() {
	
	int score = 200;
	int *myp = &score; //pointer
	
	printf("Value of score is %d \n",score);
	printf("Value of pointer is %p \n", myp);
	
	int &another_score = score;
	another_score = 800; //changing value of reference will also change the vlaue of score
	
	printf("Value of pointer is %p \n", myp);
	printf("Value of score is %d \n",score);
	
	return 0;
	
	
	
}
