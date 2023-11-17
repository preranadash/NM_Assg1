// main.c
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of 100 float elements using calloc
    float* myArray = (float*)calloc(100, sizeof(float));

    // Open a text file for writing
    FILE* outputFile = fopen("output.txt", "w");

    // Check if the file opened successfully
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening output.txt for writing.\n");
        return 1;
    }

    // Print and assign squares to the elements of the array
    for (int i = 0; i < 100; i++) {
        fprintf(outputFile, "Element %d before assignment: %f\n", i + 1, myArray[i]);
        myArray[i] = (i+1) * (i+1);  // Assign squares
        fprintf(outputFile, "Element %d after assignment: %f\n", i + 1, myArray[i]);
    }

    // Calculate mean and variance using the function
    float* result = calculateMeanAndVariance(myArray, 100);

    // Print mean and variance to the file
    fprintf(outputFile, "\nMean: %f\n", result[0]);
    fprintf(outputFile, "Variance: %f\n", result[1]);

    // Close the file
    fclose(outputFile);

    // Free the allocated memory
    free(myArray);
    free(result);

    return 0;
}
