#include "statistics.h"
#include <stdlib.h>
#include <math.h>

double calculateMean(double* array, int length) {
    double sum = 0.0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / length;
}

double calculateVariance(double* array, int length, double mean) {
    double sum_squared_diff = 0.0;
    for (int i = 0; i < length; i++) {
        double diff = array[i] - mean;
        sum_squared_diff += diff * diff;
    }
    return sum_squared_diff / (length - 1);  // Use (length - 1) for unbiased sample variance
}

double* calculateMeanAndVariance(double* array, int length) {
    double* result = (double*)malloc(2 * sizeof(double));

    if (length == 1) {
        result[0] = array[0];
        result[1] = 0.0;
        return result;
    }

    // Calculate mean
    result[0] = calculateMean(array, length);

    // Recalculate variance without modifying the array
    result[1] = calculateVariance(array, length, result[0]);

    // If variance is zero, set it to 0.0 to avoid issues with sqrt
    if (result[1] == 0.0) {
        result[1] = 0.0;
    }

    return result;
}

