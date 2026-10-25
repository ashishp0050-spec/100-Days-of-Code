#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    if (scanf("%s", filename) != 1) return 0;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) return 0;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
