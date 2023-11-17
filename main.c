// main.c
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"
#include <gsl/gsl_statistics.h> // Include GSL header

int main() {
    // Create an array of 100 double elements using calloc
    double* myArray = (double*)calloc(100, sizeof(double));

    // Print and assign squares to the elements of the array
    for (int i = 0; i < 100; i++) {
        myArray[i] = (i+1) *(i+1);  // Assign squares
    }

    // Calculate mean and variance using the GSL function
    double* result_gsl = calculateMeanAndVariance(myArray, 100);

    // Print mean and variance using GSL functions
    printf("Mean (GSL): %f\n", result_gsl[0]);
    printf("Variance (GSL): %f\n", result_gsl[1]);

    // Calculate mean and variance using the loop-based function
    double* result_loop = calculateMeanAndVariance(myArray, 100);

    // Print mean and variance using loop-based functions
    printf("Mean (Loop): %f\n", result_loop[0]);
    printf("Variance (Loop): %f\n", result_loop[1]);

    // Free the allocated memory
    free(myArray);
    free(result_gsl);
    free(result_loop);

    return 0;
}
