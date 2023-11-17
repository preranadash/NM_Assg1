// main.c
#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of 100 float elements using calloc
    float* myArray = (float*)calloc(100, sizeof(float));

    // Open a binary file for writing
    FILE* binaryFile = fopen("output.bin", "wb");

    // Check if the file opened successfully
    if (binaryFile == NULL) {
        fprintf(stderr, "Error opening output.bin for writing.\n");
        return 1;
    }

    // Print and assign squares to the elements of the array
    for (int i = 0; i < 100; i++) {
        fwrite(&myArray[i], sizeof(float), 1, binaryFile);
        myArray[i] = (i+1) * (i+1);  // Assign squares
    }

    // Calculate mean and variance using the function
    float* result = calculateMeanAndVariance(myArray, 100);

    // Write mean and variance to the file
    fwrite(result, sizeof(float), 2, binaryFile);

    // Close the binary file
    fclose(binaryFile);

    // Free the allocated memory
    free(myArray);
    free(result);

    return 0;
}
