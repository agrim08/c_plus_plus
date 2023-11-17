#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //refrencing a pointer

    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl; //derefrencing a pointer
//with the help of derefrencing we can do many things with varibale but w/o using it directly :)
    
    *ptr = 20;
    cout << *ptr << endl;

//arthematic oper. with pointers:

    ptr ++;
    cout << ptr << endl; //value will increase by 4 bcz int has size of 4 bytes.
    
    return 0;
}
