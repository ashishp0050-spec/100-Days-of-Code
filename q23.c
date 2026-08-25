#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);
    if (d > 30) {
        printf("Membership Cancelled\n");
    } else {
        int fine = 0;
        if (d <= 5) {
            fine = d * 2;
        } else if (d <= 10) {
            fine = 5 * 2 + (d - 5) * 4;
        } else {
            fine = 5 * 2 + 5 * 4 + (d - 10) * 6;
        }
        printf("Fine ₹%d\n", fine);
    }
    return 0;
}
