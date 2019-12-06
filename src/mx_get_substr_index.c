#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL || mx_strlen(sub) == 0)
        return -2;
    int len1 = mx_strlen(str), len2 = mx_strlen(sub), n = 0;;
    char *s = mx_strnew(len1);
    for (int i = 0; i < len1; i++)
        s[i] = str[i];
    while (len1 > 0) {
        bool flag = true;
        for (int j = 0; j < len2 && flag; j++) {
            if (s[j] != sub[j])
                flag = false;
        }
        if (flag)
            return n;
        s++;
        n++;
        len1--;
    }
    return -1;
}

/*#include <stdio.h>
int main() {
    char *hay = "ArtyPyDev";
    char *nee = "Dev";
    printf("%d", mx_get_substr_index(hay, nee));
}*/
