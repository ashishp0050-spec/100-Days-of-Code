#include <stdio.h>

int main() {
    char name[100];
    int age;
    if (scanf("%*[^:]: %s", name) != 1) scanf("%s", name);
    if (scanf("%*[^:]: %d", &age) != 1) scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "Name: %s\nAge: %d\n", name, age);
        fclose(fp);
        printf("File created successfully! Data written to info.txt\n");
    }
    return 0;
}
