#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char s[20];
    if (scanf("%s", s) != 1) return 0;
    enum Status status;
    if (strcmp(s, "SUCCESS") == 0) status = SUCCESS;
    else if (strcmp(s, "FAILURE") == 0) status = FAILURE;
    else status = TIMEOUT;
    switch (status) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
