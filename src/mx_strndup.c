#include "libmx.h"

char *mx_strndup(const char *s1, size_t  n) {
    if (s1 == NULL)
        return NULL;
    int len = mx_strlen(s1);
    char *str = mx_strnew(len);
    if (str == NULL)
        return NULL;
    for (size_t i = 0; i < n && s1[i] != '\0'; i++) {
        str[i] = s1[i];
    }
    return str;
}

