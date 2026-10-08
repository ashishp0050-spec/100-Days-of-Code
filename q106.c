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
    for (int i = 0; i < n; i++) {
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;
            }
        }
        printf("%d%s", nge, (i == n - 1) ? "\n" : ", ");
    }
    return 0;
}
