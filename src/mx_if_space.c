#include "libmx.h"

bool mx_if_space(char c) {
    if (c == 9 || c == 10 || c == 12 || c == 13 || c == ' ')
        return true;
    return false;
}
