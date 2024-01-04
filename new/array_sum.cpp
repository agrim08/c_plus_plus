#include<iostream>
using namespace std;

int main(){

    int count = 0;


    int arr[100];

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<100; i++){
        count += arr[i];
    }
    cout << "sum of array is: " << count << endl;

    return 0;
}