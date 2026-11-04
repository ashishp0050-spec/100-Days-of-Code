#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char s[20];
    if (scanf("%s", s) != 1) return 0;
    if (strcmp(s, "FEB") == 0) {
        printf("28 or 29 days\n");
    } else if (strcmp(s, "APR") == 0 || strcmp(s, "JUN") == 0 || strcmp(s, "SEP") == 0 || strcmp(s, "NOV") == 0) {
        printf("30 days\n");
    } else {
        printf("31 days\n");
    }
    return 0;
}
