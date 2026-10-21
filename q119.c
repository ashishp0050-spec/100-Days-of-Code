#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    int arr[1000], n = 0;
    char *p = input;
    if (strrchr(input, '[')) {
        p = strrchr(input, '[') + 1;
        while (*p && *p != ']') {
            if ((*p >= '0' && *p <= '9') || *p == '-') {
                char *end;
                arr[n++] = strtol(p, &end, 10);
                p = end;
            } else {
                p++;
            }
        }
    } else {
        while (*p) {
            if ((*p >= '0' && *p <= '9') || *p == '-') {
                char *end;
                arr[n++] = strtol(p, &end, 10);
                p = end;
            } else {
                p++;
            }
        }
    }
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeated = arr[i];
                break;
            }
        }
        if (repeated != -1) break;
    }
    printf("%d\n", repeated);
    return 0;
}
