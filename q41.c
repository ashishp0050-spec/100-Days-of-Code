#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }
    int last = n % 10;
    int temp = n;
    int p = 1;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }
    int first = temp;
    int mid = (n % p) / 10;
    int res = last * p + mid * 10 + first;
    printf("%d\n", res);
    return 0;
}
