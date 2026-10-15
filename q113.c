#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    int arr[1000], n = 0, k = 1;
    char *p = input;
    if (strrchr(input, '[')) {
        p = strrchr(input, '[') + 1;
        while (*p && *p != ']') {
            while (*p == ' ' || *p == ',') p++;
            if (*p == ']' || *p == '\0') break;
            char *end;
            arr[n++] = strtol(p, &end, 10);
            p = end;
        }
        if (strstr(input, "k")) {
            char *t = strstr(input, "k");
            while (*t && (*t < '0' || *t > '9')) t++;
            k = atoi(t);
        }
    } else {
        int val;
        char *end;
        while ((val = strtol(p, &end, 10)), p != end) {
            arr[n++] = val;
            p = end;
        }
        if (n > 1) {
            k = arr[n - 1];
            n--;
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
    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    }
    return 0;
}
