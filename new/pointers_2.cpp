#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int *ptr = &a; //refrencing a pointer

    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl; //derefrencing a pointer


    return 0;
}