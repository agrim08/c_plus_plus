#include<iostream>
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    // printing spcae
    int i = 1;
    while(i <= n){

        int space = n - i;
        while(space){
            cout << " ";
            space --;

        }

        // printing triangle 1;
        int j = 1;
        while( j <= i){
            cout << j;
            j++;
        }

        //printing 2nd triangle
        int start = i - 1;
        while(start){
            cout << start;
            start --;
        }
        cout << endl;
        i++;
    }
    return 0;
}