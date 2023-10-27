//pointer are created to store the address and not a typical value


#include <iostream>
using namespace std;

int main(){
//	const int life = 2;
//	life = 3; this will give an error ;(

	int life = 2;
	
	int card;
	card = 40;
	int my_card = card;
	
	int *mypointer;
	mypointer = &card;
	my_card = *mypointer;  //pointer deref.
	
	printf("Value of card is: %d \n", my_card);
	printf("Value of card is: %p \n", mypointer);
	printf("Value of card is: %d \n", my_card);
}























