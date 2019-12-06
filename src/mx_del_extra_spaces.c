#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *trimmed_str = mx_strtrim(str);
    int len = mx_strlen(trimmed_str);
    char *rez_str_s = mx_strnew(len);
    int j = 0;
    for(int i = 0; i < len; i ++) {
        if(trimmed_str[i] > 32 && trimmed_str[i] < 127) {
            rez_str_s[j] = trimmed_str[i];
            j ++;
        }
        else if((trimmed_str[i] == 32 && trimmed_str[i + 1] > 32 && trimmed_str[i] < 127 && rez_str_s[j - 1] != 32) ||
        (trimmed_str[i] == 32 && trimmed_str[i - 1] > 32 && trimmed_str[i - 1] < 127)) {
            rez_str_s[j] = trimmed_str[i];
            j ++;
        }
    } 
    len = mx_strlen(rez_str_s);
    char *rez_str_c = mx_strnew(len);
    rez_str_c = rez_str_s;
    free(rez_str_s);
    return rez_str_c;
}

/*#include <stdio.h>
int main() {
    //char *name = "\f My name...  is \r Neo \t\n ";
    //printf("%s", mx_del_extra_spaces(name));
    printf("%s\n", mx_del_extra_spaces("I   \n\n\n\n don't KNOW\n\n\nwhy\n\n\nusay \nGbye\n"));
}*/
