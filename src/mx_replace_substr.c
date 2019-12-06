#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;
    int str_len = mx_strlen(str), sub_len = mx_strlen(sub), s_len = 0;
    int replace_len = mx_strlen(replace), point = mx_get_substr_index(str, sub);
    char *s = mx_strnew(str_len * replace_len);
    while (point > -1) {
        for (int i = 0; i < point; i++)
            s[i + s_len] = str[i];
        str += point, s_len += point;
        for (int i = 0; i < replace_len; i++)
             s[i + s_len] = replace[i];
        str += sub_len, s_len += replace_len;
        point = mx_get_substr_index(str, sub);
    }
    for (int i = 0; i < mx_strlen(str); i++)
        s[i + s_len] = str[i];
    char *s1 = mx_strnew(mx_strlen(s));
    for (int i = 0; i < mx_strlen(s); i++)
        s1[i] = s[i];
    free(s);
    return s1;
}

/*#include <stdio.h>
int main() {
    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));
    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta"));
}*/
