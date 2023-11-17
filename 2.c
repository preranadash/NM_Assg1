#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double: %le to %le\n", DBL_MIN, DBL_MAX);

    return 0;
}
