#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        // Recursive case: factorial(n) = n * factorial(n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    unsigned long long fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}
