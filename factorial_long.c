#include <stdint.h>

uint64_t factorial_long(int64_t n) {
    uint64_t result = 1;
    for (int64_t i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
