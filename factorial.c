#include <stdint.h>

int64_t factorial(int64_t n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
