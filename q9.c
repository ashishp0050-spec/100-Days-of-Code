#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    float si = (p * r * t) / 100.0;
    float ci = p * (pow(1.0 + r / 100.0, t) - 1.0);
    printf("Simple Interest=%.2g, Compound Interest=%.2f\n", si, ci);
    return 0;
}
