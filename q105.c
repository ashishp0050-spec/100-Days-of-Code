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
    int maj = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > n / 2) {
            maj = arr[i];
            break;
        }
    }
    printf("%d\n", maj);
    return 0;
}
