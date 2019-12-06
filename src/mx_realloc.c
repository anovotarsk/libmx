#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (size == 0)
        return NULL;
    if (ptr == NULL)
        return malloc(size);
    void *new = (void*) malloc(size);
    if (new == NULL)
        return NULL;
    char *s = (char*) new;
    char *p = (char*) ptr;
    size_t len = mx_strlen(ptr);
    if (size  < len) {
        for (size_t i = 0; i < size; i++)
            *s++ = *p++;
    }
    else
        for (size_t i = 0; i < len; i++)
            *s++ = *p++;
    free(ptr);
    return new;
}

/*#include <stdio.h>
char *mx_strnew(const int size);

int main() {
    char *s = mx_strnew(10);
    for (int i = 0; i < 10; i++)
        s[i] = 'a';
    s[10] = '!';
    s = mx_realloc(s, 20);
    for (int i = 10; i < 20; i++)
        s[i] = 'q';
    s[19] = '\0';
    printf("%s", s);
}*/
