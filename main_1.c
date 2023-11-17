// main.c
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of 100 float elements
    float* myArray = (float*)malloc(100 * sizeof(float));

    // Assign values to the elements of the array
    for (int i = 0; i < 100; i++) {
        myArray[i] = (i+1)(i+1);
    }

    // Calculate mean and variance using the function
    float* result = calculateMeanAndVariance(myArray, 100);

    // Print mean and variance
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    // Free the allocated memory
    free(myArray);
    free(result);

    return 0;
}
