#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    int new_word = 1;
    for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
        if (line[i] == ' ') {
            new_word = 1;
        } else if (new_word) {
            printf("%c.", line[i]);
            new_word = 0;
        }
    }
    printf("\n");
    return 0;
}
