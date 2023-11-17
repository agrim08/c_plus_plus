#include<iostream>
using namespace std;

int main (){

    int arr[3] = {10,20,30};
    cout << *arr << endl;

    int *ptr = arr;
    for(int i = 0; i < 3; i++){
        cout << *ptr << endl;
        ptr++;
    }

//doing above same but w/o using ptr:

    for(int i=0; i < 3; i++){
        cout << *(arr + i) << endl;
    }

    return 0;    
}