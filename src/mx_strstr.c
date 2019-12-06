#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    if (haystack == NULL || needle == NULL || mx_strlen(needle) == 0)
        return NULL;
    int len1 = mx_strlen(haystack), len2 = mx_strlen(needle);
    char *str = mx_strnew(len1);
    for (int i = 0; i < len1; i++)
        str[i] = haystack[i];
    while (len1 > 0) {
        bool flag = true;
        for (int j = 0; j < len2 && flag; j++) {
            if (str[j] != needle[j])
                flag = false;
        }
        if (flag)
            return str;
        str++;
        len1--;
    }
    return NULL;
}

/*#include <stdio.h>
int main() {
    char *hay = "ArtyPyDev";
    char *nee = "Py";
    printf("%s", mx_strstr(hay, nee));
}*/
