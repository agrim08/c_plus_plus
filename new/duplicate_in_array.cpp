#include<bits/stdc++.h>
using namespace std;

int FindDuplicate(int arr[100]){
    int ans = 0;

    //XOR all array elements:
    for(int i = 0; i < arr.size(); i++){
        ans = ans^arr[i];
    }

    //XOR[1,n-1]:
    for(int i = 1; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return 0;
}
