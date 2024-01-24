#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){

        // int j = 1;
        // int val = i;
        
        // while(j <= i){

        //     cout << " "<< val;
        //     val++;
        //     j++;
        // }

        //another way:

        int j = i;
        while(j < 2*i){
            cout << " "<< j;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
