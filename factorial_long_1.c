#include <stdio.h>
#include <gmp.h>
#include <time.h>

void factorial(int n) {
    mpz_t result;
    mpz_init(result);

    clock_t start_time = clock();

    mpz_fac_ui(result, n);

    clock_t end_time = clock();

    gmp_printf("The factorial of %d is: %Zd\n", n, result);
    printf("Time taken to compute factorial: %f seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    mpz_clear(result);
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 1;
    }

    factorial(n);

    return 0;
}
