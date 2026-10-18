#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    int arr[1000], n = 0, target = 0;
    char *p = input;
    if (strchr(input, '[')) {
        p = strchr(input, '[') + 1;
        while (*p && *p != ']') {
            while (*p == ' ' || *p == ',') p++;
            if (*p == ']' || *p == '\0') break;
            char *end;
            arr[n++] = strtol(p, &end, 10);
            p = end;
        }
        if (strstr(input, "target")) {
            char *t = strstr(input, "target");
            while (*t && (*t < '0' || *t > '9') && *t != '-') t++;
            target = atoi(t);
        }
    } else {
        int val;
        char *end;
        while ((val = strtol(p, &end, 10)), p != end) {
            arr[n++] = val;
            p = end;
        }
        if (n > 1) {
            target = arr[n - 1];
            n--;
        }
    }
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("-1 -1\n");
    }
    return 0;
}
