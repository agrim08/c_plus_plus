#include<iostream>
using namespace std;

int add(int num1 , int num2){
    int sum = num1 + num2;
    cout << "sum is " << sum << endl;
    return sum;
}

int main(){
    
    int a,b;
    cin >> a;
    cin >> b;
    add(a,b);

    return 0;

}