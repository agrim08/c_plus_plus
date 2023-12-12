#include<iostream>
#include <limits.h>
using namespace std;

int getMin(int num[], int n){
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        mini = min(mini , num[i]);
    }
    return mini;
}

int getMax(int num[], int n){
    int maxi = INT_MIN;

    for(int i = 0; i<n; i++){
        maxi = min(maxi , num[i]);
    }
    return maxi;
}

int main(){

    int size;
    cin >> size;

    int arr[100];
    for(int i; i < size; i++){
        cin >> arr[i];
    }

    cout << "maximum value is: " << getMax(arr,size) << endl;
    cout << "minimum value is: " << getMin(arr,size) << endl;

    return 0;
}