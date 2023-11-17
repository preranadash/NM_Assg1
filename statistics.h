// functions.h
#ifndef STATISTICS_H
#define STATISTICS_H

#include <gsl/gsl_statistics.h>

double calculateMean(double* array, int length);
double calculateVariance(double* array, int length, double mean);
double* calculateMeanAndVariance(double* array, int length);

#endif  // FUNCTIONS_H
