// Binary Search is a searching algorithm for finding an element's position in a sorted array.
// In this approach, the element is always searched in the middle of a portion of an array.

//time complexity: O(logn) <<<< that of linear serach

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    // int mid = (start + end)/2;      //maximum value of int is (2^31-1),so if both s and e exceeds this value then it will generate an error
    int mid = start + (end - start)/2;

    while (start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //goto right part:
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start + end)/2;     //maximum value of int is (2^31-1),so if both s and e exceeds this value then it will generate an error
        mid = start + (end - start)/2;
    }
    
    return -1;
}

int main(){

    int even[6] = {2,3,4,5,6,7};
    int odd[5] = {3,8,10,22,25};
    
    int evenIndex = binarySearch(even,6,5);
    cout << "index of 5 is "<< evenIndex << endl;

    int oddIndex = binarySearch(odd,5,10);
    cout << "index of 10 is "<< oddIndex << endl;
    
    return 0;
}