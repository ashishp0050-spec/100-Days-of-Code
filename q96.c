#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    int len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
        len--;
    }
    int i = 0;
    while (i < len) {
        if (line[i] == ' ') {
            putchar(' ');
            i++;
        } else {
            int start = i;
            while (i < len && line[i] != ' ') i++;
            for (int j = i - 1; j >= start; j--) {
                putchar(line[j]);
            }
        }
    }
    putchar('\n');
    return 0;
}
