#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    char *str = (char*) s;
    char *str1 = (char*) s;
    bool flag = false;
    for (size_t i = 0; i < n; i++) {
        if (*str == c) {
            str1 = str;
            flag = true;
        }
        str++;
    }
    if (flag)
        return str1;
    return NULL;
}

/*#include <stdio.h>
int main() {
    printf("%s\n", mx_memrchr("Trinity", 'i', 7));
    printf("%s\n", mx_memrchr("Trinity", 'M', 7));
}*/
