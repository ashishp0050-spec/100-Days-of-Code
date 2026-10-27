#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];
    if (scanf("%s", filename) != 1) return 0;
    getchar();
    if (!fgets(text, sizeof(text), stdin)) return 0;
    FILE *fp = fopen(filename, "a");
    if (fp != NULL) {
        fputs(text, fp);
        fclose(fp);
        printf("File updated successfully with appended text.\n");
    }
    return 0;
}
