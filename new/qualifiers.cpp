#include <iostream>
using namespace std;

int lifeUp(){
	static int life = 3;
	return life+=1;
}

int main(){
	int life = 3;
	cout << "Your game life is: " << life << endl;
	
	life = lifeUp();
	cout << "Your updated game life is: " << life << endl;

	life = lifeUp();
	cout << "Your updated game life is: " << life << endl;


	return 0;

}
