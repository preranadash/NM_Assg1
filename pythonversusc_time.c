#include <stdio.h>
#include <time.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Measure the time taken
    clock_t start_time = clock();
    unsigned long long fact = factorial(num);
    clock_t end_time = clock();

    // Calculate elapsed time in seconds
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("The factorial of %d is %llu\n", num, fact);
    printf("Time taken: %f seconds\n", elapsed_time);

    return 0;
}
