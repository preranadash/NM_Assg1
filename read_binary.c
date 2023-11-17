// read_binary.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open the binary file for reading
    FILE* binaryFile = fopen("output.bin", "rb");

    // Check if the file opened successfully
    if (binaryFile == NULL) {
        fprintf(stderr, "Error opening output.bin for reading.\n");
        return 1;
    }

    // Read the elements from the file
    float myArray[100];
    fread(myArray, sizeof(float), 100, binaryFile);

    // Read mean and variance from the file
    float result[2];
    fread(result, sizeof(float), 2, binaryFile);

    // Close the binary file
    fclose(binaryFile);

    // Print the read elements
    for (int i = 0; i < 100; i++) {
        printf("Element %d: %f\n", i + 1, myArray[i]);
    }

    // Print mean and variance
    printf("\nMean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    return 0;
}
