#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined\n", a + b, a - b, a * b);
    }
    return 0;
}
