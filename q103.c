#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    int arr[1000], n = 0;
    char *p = input;
    while (*p) {
        if ((*p >= '0' && *p <= '9') || *p == '-') {
            char *end;
            arr[n++] = strtol(p, &end, 10);
            p = end;
        } else {
            p++;
        }
    }
    int total_sum = 0;
    for (int i = 0; i < n; i++) total_sum += arr[i];
    int left_sum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        if (left_sum == total_sum - left_sum - arr[i]) {
            pivot = i;
            break;
        }
        left_sum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
