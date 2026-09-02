#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod = 1;
    int found = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            found = 1;
        }
        n /= 10;
    }
    if (!found) prod = 1;
    printf("%d\n", prod);
    return 0;
}
