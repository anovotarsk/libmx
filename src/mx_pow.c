#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    if (n == 0) return 0;
    if (pow == 0) return 1;
    if (pow == 1) return n;
    double sqr = 1;
    for (unsigned int i = 1;  i <= pow; i++) {
        sqr *= n;
    }
    return sqr;
}

