#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    char *start = line;
    if (strstr(line, "str = ")) {
        start = strstr(line, "str = ") + 6;
    }
    int new_word = 1;
    for (int i = 0; start[i] != '\0'; i++) {
        if (start[i] == ' ' || start[i] == '\n' || start[i] == '\t') {
            new_word = 1;
        } else if (new_word) {
            if (start[i] >= 'a' && start[i] <= 'z') {
                start[i] -= 32;
            }
            new_word = 0;
        }
    }
    printf("%s", start);
    return 0;
}
