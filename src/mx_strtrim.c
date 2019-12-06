#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL)
        return NULL;
    int len = mx_strlen(str);
    int i;
    for (i = 0; mx_if_space(str[i]) != false; i++);
    for (; mx_if_space(str[len - 1]); len--);
    char *s = mx_strnew(len - i);
    if (s == NULL) {
        free(s);
        free(s);
    }
    for (int j = 0; i < len; i++) {
        s[j] = str[i];
        j++;
    }
    return s;
}

/*#include <stdio.h>
int main() {
    char *name = "\f My name... is Neo \t\n ";
    printf("%s", mx_strtrim(name));
}*/
