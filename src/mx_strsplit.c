#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == NULL)
        return NULL;
    int len = mx_strlen(s), count_words = mx_count_words(s, c);
    int count = 0, buf = 0;
    char **rez = malloc((sizeof(char*) * count_words + 1));
    if (rez == NULL)
        return NULL;
    for (int i = 0; i < len; i++) {
        buf = mx_get_char_index(s, c);
        if (buf == -1)
            buf = mx_strlen(s);
        if (buf > 0) {
            rez[count] = mx_strndup(s, buf);
            s += mx_strlen(rez[count]) - 1;
            i += mx_strlen(rez[count]) - 1;
            count++;
        }
        s++;
    }
    rez[count_words] = NULL;
    return rez;
}

/*#include <stdio.h>
int main() {
    char *s = " Knock,knock,Neo., dfd,fdgfdg,dfg,fg,fg,fdg,fg,dfg,fg,f,gf,gfd,";
    char **arr = mx_strsplit(s, ',');
    int i = 0;
    while (arr[i]) {
        printf("%s\n", arr[i]);
        i++;
    }
}*/
