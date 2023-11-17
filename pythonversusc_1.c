#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and print the factorial
        unsigned long long result = factorial(n);
        printf("Factorial of %d = %llu\n", n, result);
    }

    return 0;
}

