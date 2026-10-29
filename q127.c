#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) return 0;
    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 0;
    }
    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
