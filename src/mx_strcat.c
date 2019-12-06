#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    if (s1 == NULL)
        return NULL;
    if (s2 == NULL)
        return s1;
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    char *str = mx_strnew(len1 + len2);
    for (int i = 0; i < len1 + len2; i++) {
        if (i < len1)
            str[i] = s1[i];
        if (i > len1 -1)
            str[i] = s2[i - len1];
    }
    return str;
}

#include <stdio.h>
char *mx_strnew(const int size);

/*int main() {
    char *s1 = "Art";
    char *s2 = "PyDev";
    printf("%s", mx_strcat(s1, s2));
}*/
