#include <iostream>
using namespace std;

int main(){
    int i = 5;
    while(true){
        if(i % 7 ==0) {
            cout << i << endl;
            break;
        }else{
            i += 5;
        }
    }

    return 0;
}