#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    if (scanf("%s", str) != 1) return 0;
    if (scanf(" %c", &ch) != 1) return 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
