// if we add the cube of digits and we get the original number then the number is said to be a armstrong number 
// ex. 153 = 1 + 125 + 27 = 153

#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;
    int originaln = n;

    while(n > 0){
        int lastDigit = n % 10;
        sum += pow(lastDigit,3);
        n = n/10;
    }
    if(sum == originaln){
        cout << "Armstrong number" << endl;
    }else{
        cout << "not a armstrong number" << endl;
    }
    return 0;
}