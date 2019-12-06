#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (!arr || !delim) return;
    int len_arr = 0;
    while (arr[len_arr] != NULL) len_arr++;
    if (len_arr == 0) return;
    for (int i = 0; i < len_arr; i++) {
        mx_printstr(arr[i]);
        if (i < len_arr - 1)
            mx_printstr(delim);
    }
    mx_printstr("\n");
}

/*int main() {
    char *arr[] = {"", "jiu", "lol", "qwertyui", NULL};
    char *del = "";
    mx_print_strarr(arr, del);
}*/
