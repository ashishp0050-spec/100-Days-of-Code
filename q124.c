#include <stdio.h>

int main() {
    char src[100], dest[100];
    if (scanf("%s %s", src, dest) != 2) return 0;
    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL) return 0;
    FILE *fdest = fopen(dest, "w");
    if (fdest == NULL) {
        fclose(fsrc);
        return 0;
    }
    int ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }
    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
