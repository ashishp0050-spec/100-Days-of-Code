#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    int arr[2000], n = 0;
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
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
    }
    return 0;
}
