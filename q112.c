#include <stdio.h>
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
    if (n == 0) return 0;
    long long max_so_far = arr[0];
    long long curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : (curr_max + arr[i]);
        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }
    printf("%lld\n", max_so_far);
    return 0;
}
