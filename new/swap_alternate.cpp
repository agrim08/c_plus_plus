#include<iostream>
using namespace std;

void printArr(int arr[], int size){

    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlt(int arr[], int size){

    for(int i = 0; i <size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {5,2,7,8,9,0,1,3};
    int odd[5] = {5,6,0,3,7};

    swapAlt(even , 8);
    printArr(even,8);

    swapAlt(odd , 5);
    printArr(odd,5);

    return 0;
}