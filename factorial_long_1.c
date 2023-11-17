#include <stdio.h>
#include <time.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 1;
    }

    clock_t start_time = clock();
    long long result = factorial(n);
    clock_t end_time = clock();

    printf("The factorial of %d is: %lld\n", n, result);
    printf("Time taken to compute factorial: %f seconds\n", ((double)end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
