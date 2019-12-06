#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char hex[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
    int hex_len = 0;
    int ost;
    char c;
    while (nbr % 16 != 0) {
        ost = nbr % 16;
        if (ost >= 0 && ost <= 9)
            c = ost + 48;
        if (ost >= 10 && ost <= 15)
            c = ost + 87;
        for (int i = hex_len; i > 0; i--) {
            hex[i] = hex[i - 1];
        }
        hex_len++;
        hex[0] = c;
        nbr = nbr / 16;
    }
    char *rez = (char *) malloc(sizeof(char) * hex_len+1);
    for (int i = 0; i < hex_len; i++) rez[i] = hex[i];
    if (hex_len == 0) return "0";
    rez[hex_len] = '\0';
    return rez;
}

