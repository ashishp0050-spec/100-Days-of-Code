#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int d = (r < c) ? r : c;
    int distinct = 1;
    for (int i = 0; i < d; i++) {
        for (int j = i + 1; j < d; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
