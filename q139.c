#include <stdio.h>

enum State { SUCCESS, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
