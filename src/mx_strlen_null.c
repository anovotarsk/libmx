#include "libmx.h"

int mx_strlen_null(const char *s) {
    if (s == NULL)
        return 0;
    int len = 0;
    while (0==0) {
       if (s[len] == '\0') {
           return len;
       }
       len++;
    }
}