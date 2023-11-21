#include <iostream>
using namespace std;

int main () {
    int *p1 , *p2, *p3;
    int x,y,z;
    cout << "enter three numbers:" << endl;
    cin >> x >> y >> z;
    p1 = &x;
    p2 = &y;
    p3 = &z;

    if(*p1 > *p2 && *p1 > *p2){
        cout << *p1 << " is greatest" << endl ;
    }
    else if(*p2 > *p1 && *p2 > *p3){
        cout << *p2 << " is greatest" << endl ;
    }
    else if(*p3 > *p1 && *p3 > *p2){
        cout << *p1 << " is greatest" << endl ;
    }

return 0;

}