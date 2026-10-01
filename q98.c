#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    char words[10][100];
    int count = 0;
    int i = 0;
    while (line[i] != '\0') {
        while (line[i] == ' ' || line[i] == '\n') i++;
        if (line[i] == '\0') break;
        int start = i;
        while (line[i] != ' ' && line[i] != '\n' && line[i] != '\0') i++;
        int len = i - start;
        strncpy(words[count], line + start, len);
        words[count][len] = '\0';
        count++;
    }
    for (int j = 0; j < count - 1; j++) {
        printf("%c.", words[j][0]);
    }
    if (count > 0) {
        if (count > 1) printf(" ");
        printf("%s\n", words[count - 1]);
    }
    return 0;
}
