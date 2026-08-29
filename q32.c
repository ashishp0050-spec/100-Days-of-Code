#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int orig = n;
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (rev == orig) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}
