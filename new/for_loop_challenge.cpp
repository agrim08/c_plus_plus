// Input Format:
// You will be given two positive integers, a and b (a <= b), separated by a new line.

// Output Format:
// For each integer  in the inclusive interval [a, b]:

// If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n > 9 and it is an even number, then print "even".
// Else if n > 9 and it is an odd number, then print "odd".

#include <iostream>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    string array[9] = {"one" ,"two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = a; i <= b; i++){
        if(i <= 9){
            cout << array[i-1] << endl;
        }
        else{
            if(i % 2 == 0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}