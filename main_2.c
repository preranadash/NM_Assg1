// main.c
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of 100 float elements using calloc
    float* myArray = (float*)calloc(100, sizeof(float));

    // Print and assign squares to the elements of the array
    for (int i = 0; i < 100; i++) {
        printf("Element %d before assignment: %f\n", i + 1, myArray[i]);
        myArray[i] = (i+1) * (i+1);  // Assign squares
        printf("Element %d after assignment: %f\n", i + 1, myArray[i]);
    }

    // Calculate mean and variance using the function
    float* result = calculateMeanAndVariance(myArray, 100);

    // Print mean and variance
    printf("\nMean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    // Free the allocated memory
    free(myArray);
    free(result);

    return 0;
}
