// The entire array can be initialized to zero very simply. This is shown below.

// int arr[10] = {0};
// However, it is not possible to initialize the entire array to a non-zero value using the above method. This is shown below.

// int arr[10] = {5};
// In the above example, only the first element will be initialized to 5. All others are initialized to 0.

// A for loop can be used to initialize an array with one default value that is not zero. This is shown below.

#include <iostream>
using namespace std;
int main() {
   int a[10] = {0};
   int b[10] = {5};
   int c[10];

   for(int i = 0; i<10; i++) {
      c[i] = 5;
   }

   cout<<"Elements of array a: ";
   for(int i = 0; i<10; i++) {
      cout<< a[i] <<" ";
   }

   cout<<"\n";

   cout<<"Elements of array b: ";
   for(int i = 0; i<10; i++) {
      cout<< b[i] <<" ";
   }

   cout<<"\n";

   cout<<"Elements of array c: ";
   for(int i = 0; i<10; i++) {
      cout<< c[i] <<" ";
   }
   
   cout<<"\n";

   return 0;
}