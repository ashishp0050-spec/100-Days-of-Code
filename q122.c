#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp != NULL) {
        char line[256];
        while (fgets(line, sizeof(line), fp)) {
            printf("%s", line);
        }
        fclose(fp);
    }
    return 0;
}
