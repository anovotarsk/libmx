#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    if (!s || !arr)
        return -1;
    int start = 0;
    int finish = size-1;
    *count = 0;
    while (start <= finish) {
        int center = start + (finish-start) / 2;
        *count = *count + 1;
        if (mx_strcmp(arr[center], s) == 0) {
            return center;
        }
        if (mx_strcmp(arr[center], s) > 0) {
            finish = center-1;
        }
        if (mx_strcmp(arr[center], s) < 0) {
            start = center +1;
        }
    }
    *count = 0;
    return -1;
}

