#include <iostream>

struct User{
	const int id;
	int age;
	User() : id(001), age(18){
	};
};

int main() {
	using namespace std;
	//stack:
	int score = 100;
	User agrim;
	
	//heap;
	int *heap_score = new int;
	*heap_score = 200;
	
	User* ansh = new User();
	
	delete heap_score;
	delete ansh;
	
	return 0;
}
