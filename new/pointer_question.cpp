//important:
#include <iostream>
using namespace std;

int main() {
    int num[5];
    int *p;
    p = num;
    *p = 10; //1st index of num = 10
    p++;
    *p = 20; 
    p = &num[2];
    *p = 30;
    p = num + 3;
    *p = 40;
    p = num;
    *(p + 4) = 50;

    for( int i = 0; i < 5; i++){
        cout << num[i] << endl;
    }

    return 0;
}