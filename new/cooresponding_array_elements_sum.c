#include<stdio.h>
int main(){
    int a1[5],a2[5],sum[5];

    printf("Enter the elements of array 1:");
    for(int i = 0; i<5; i++){
        scanf("%d", &a1[i]);
    }
    printf("Enter the elements of array 2:");
    for(int i = 0; i<5; i++){
        scanf("%d", &a2[i]);
    }
    for(int i = 0; i<5; i++){
        sum[i] = a1[i] + a2[i];
    }
    for(int i = 0; i<5; i++){
        printf("%d \n", sum[i]);
    }

    return 0;
}