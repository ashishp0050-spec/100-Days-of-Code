#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (scanf("%s", s) != 1) return 0;
    int len = strlen(s);
    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            first = 0;
            for (int k = i; k <= j; k++) {
                putchar(s[k]);
            }
        }
    }
    printf("\n");
    return 0;
}
