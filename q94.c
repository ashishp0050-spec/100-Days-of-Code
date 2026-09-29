#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    char longest[1000] = "";
    int max_len = 0;
    int i = 0;
    while (line[i] != '\0') {
        while (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') i++;
        if (line[i] == '\0') break;
        int start = i;
        while (line[i] != ' ' && line[i] != '\n' && line[i] != '\t' && line[i] != '\0') i++;
        int len = i - start;
        if (len > max_len) {
            max_len = len;
            strncpy(longest, line + start, len);
            longest[len] = '\0';
        }
    }
    printf("%s\n", longest);
    return 0;
}
