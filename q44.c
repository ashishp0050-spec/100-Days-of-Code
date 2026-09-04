#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 1.0;
    for (int i = 2; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
