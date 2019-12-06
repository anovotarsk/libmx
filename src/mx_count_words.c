#include "libmx.h"

int mx_count_words(const char *str, char c) {
    if (str == NULL)
        return -1;
    int len = mx_strlen(str) - 1;
    int count = 1;
    int i = 0;
    if (mx_get_char_index(str, c) == -1 && len > 0)
        return 1;
    for (int j = 0; str[j] == c; j++)
        i++;
    for (int j = len; str[j] == c; j--)
        len--;
    for (; i < len; i++) {
        if (str[i] == c && str[i + 1] != c)
            count++;
    }
    return count;
}

#include <stdio.h>
/*int main() {
    char *str = " follow * the white rabbit ";
    printf("%d \n", mx_count_words(str, '*'));
    printf("%d \n", mx_count_words(str, 'z'));
    printf("%d \n", mx_count_words(NULL, ' '));
}*/
