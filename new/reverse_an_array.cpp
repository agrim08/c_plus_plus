#include<iostream>
using namespace std;

void arrayReverse(int arr[], int n){

    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int brr[6] = {0,9,8,7,6,5};

    arrayReverse(arr,5);
    arrayReverse(brr,6);

    printArr(arr,5);
    printArr(brr,6);

    return 0;
}
