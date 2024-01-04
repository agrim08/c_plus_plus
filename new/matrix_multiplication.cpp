#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[20][20],brr[20][20],product[20][20],row1,col1,row2,col2;
    cout << "enter number of rows and columns of matrix1:" << endl;
    cin >> row1 >> col1;

    cout << "enter number of rows and columns of matrix2:" << endl;
    cin >> row2 >> col2;

    if(col1 != row2){
        cout << "Multiplication is not possible" << endl;
    }
    else
    {
        cout << "enter the elements of matrix 1 :" << endl;
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                cin >> arr[i][j];
            }
        }
        cout << "enter the elements of matrix 2 :" << endl;
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < col2; j++){
                cin >> brr[i][j];
            }
        }
        for(int i = 0; i < row1; i++){
            
            for(int j = 0; j < col2; j++){
                product[i][j] = 0;
                
                for(int k = 0; k < row1; k++){
                    product[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }

    cout << "multiplied matrix :" << endl;
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                cout << product[i][j] << " ";
            }
            cout << endl;
        } 
    }
    return 0;
}
