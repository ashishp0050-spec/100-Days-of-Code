#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    float area = 3.14159 * r * r;
    float circ = 2 * 3.14159 * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    return 0;
}
