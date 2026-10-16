#include <stdio.h>
#include <string.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    char *start = strchr(input, '"');
    char s[1000] = "";
    if (start) {
        start++;
        char *end = strchr(start, '"');
        if (end) *end = '\0';
        strcpy(s, start);
    } else {
        sscanf(input, "%s", s);
    }
    int n = strlen(s);
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int current_len = 0;
        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) break;
            visited[(unsigned char)s[j]] = 1;
            current_len++;
        }
        if (current_len > max_len) max_len = current_len;
    }
    printf("%d\n", max_len);
    return 0;
}
