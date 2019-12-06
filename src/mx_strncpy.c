#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    if (src == NULL || dst == NULL)
        return NULL;
    int n = mx_strlen(src);
    for (int i = 0; i < len; i++) {
        dst[i] = src[i];
    }
    if (n < len) {
        for (int i = n; i < len; i++) {
            dst[i] = '\0';
        }
    }
    return dst;
}

/*char *mx_strnew(const int size);
#include <stdio.h>
int main() {
    char *dest = mx_strnew(10);
    char *source ="ArtyPyDev";
    printf("%s", mx_strncpy(dest, source, 4));
}*/

