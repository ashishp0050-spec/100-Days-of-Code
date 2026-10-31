#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) return 0;
    int val, sum = 0, count = 0;
    while (fscanf(fp, "%d", &val) == 1) {
        sum += val;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
    }
    return 0;
}
