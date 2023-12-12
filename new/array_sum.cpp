#include<iostream>
using namespace std;

int main(){

    int count = 0;

    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<size; i++){
        count += arr[i];
    }
    cout << "sum of array is: " << count << endl;

    return 0;
}