#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int orig = n;
    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= d;
        }
        sum += p;
        temp /= 10;
    }
    if (sum == orig) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}
