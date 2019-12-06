#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
    if (size ==  1)
        return 0;
    int diff = 0;
    int swaps = 0;
    char *tmp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - diff -1; j++) {
            if (mx_strcmp(arr[j], arr[j+1]) > 0) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swaps++;
            }
        }
        diff++;
    }
    return swaps;
}

