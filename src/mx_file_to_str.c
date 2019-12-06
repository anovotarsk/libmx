#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int f = open(file, O_RDONLY), len = 0;
    if (f == -1)
        return NULL;
    char c[1];
    while (read(f, &c, 1) > 0)
        len++;
    close(f);
    f = open(file, O_RDONLY);
    if (f == -1)
        return NULL;
    if (len == 0)
        return NULL;
    char *str = mx_strnew(len);
    for (int i = 0; i < len; i++) {
        read(f, &c, 1);
        str[i] = c[0];
    }
    close(f);
    return str;
}

/*#include <stdio.h>
int main() {
    char *file = "file.txt";
    printf("%s", mx_file_to_str(file));
}*/
