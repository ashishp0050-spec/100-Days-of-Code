#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    if (scanf("%s", filename) != 1) return 0;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) return 0;
    int v = 0, c = 0, ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
