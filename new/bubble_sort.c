#include <stdio.h>

void bubblesort(int arr[] , int size) {

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - 1; j++){

            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d , " , arr[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {1,10,44,2,6,-2};

    int size = sizeof(data) / sizeof(data[0]);

    bubblesort(data , size);
    printf("Sorted array : \n");
    printArr(data,size);
    
}