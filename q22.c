#include <stdio.h>

int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        float p = ((sp - cp) / cp) * 100.0;
        printf("Profit %.0f%%\n", p);
    } else if (cp > sp) {
        float l = ((cp - sp) / cp) * 100.0;
        printf("Loss %.0f%%\n", l);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
