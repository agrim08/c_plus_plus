#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << *p << endl;

    int **q = &p; // this q is pointing to p

    cout << *q << endl; //once deref.
    cout << **q << endl; // twice dref.

    return 0;
}