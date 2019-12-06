#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *d = (char*) dst;
    char *s = (char*) src;
    bool flag = true;
    for (size_t i = 0; i < n && flag; i++) {
        if (*s == c)
            flag = false;
        *d++ = *s++;
    }
    return dst;
}

/*#include <stdio.h>
int main() {
    char src[15] = "1234567890";
    char dst[15] = "";
    mx_memccpy(dst, src, '5', 10);
    printf("%s", dst);
}*/
