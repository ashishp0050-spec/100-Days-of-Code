#include <stdio.h>
#include <string.h>

int main() {
    char input[2000];
    if (!fgets(input, sizeof(input), stdin)) return 0;
    char s[1000] = "", t[1000] = "";
    char *p1 = strchr(input, '"');
    if (p1) {
        char *p2 = strchr(p1 + 1, '"');
        if (p2) {
            *p2 = '\0';
            strcpy(s, p1 + 1);
            char *p3 = strchr(p2 + 1, '"');
            if (p3) {
                char *p4 = strchr(p3 + 1, '"');
                if (p4) {
                    *p4 = '\0';
                    strcpy(t, p3 + 1);
                }
            }
        }
    } else {
        sscanf(input, "%s %s", s, t);
    }
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    int freq[256] = {0};
    for (int i = 0; s[i]; i++) {
        freq[(unsigned char)s[i]]++;
        freq[(unsigned char)t[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
