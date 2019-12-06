#include "libmx.h"

char *mx_itoa(int number) {
    if (number == 0) return "0";
    int copy = number, len = 0;
    while (copy > 0) {
        copy /= 10;
        len++;
    }
    char *ascii = (char*) malloc(sizeof(char) * len + 1);
    while (number > 0) {
        for (int j = len; j > 0; j--) {
            ascii[j] = ascii[j - 1];
        }
        ascii[0] = number % 10 + 48;
        number /= 10;
    }
    ascii[len] = '\0';
    return ascii;
}

