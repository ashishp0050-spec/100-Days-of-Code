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
    int first = 1;
    for (int s = 0; s <= r + c - 2; s++) {
        if (s % 2 == 0) {
            int row = (s < r) ? s : r - 1;
            int col = s - row;
            while (row >= 0 && col < c) {
                if (!first) printf(" ");
                printf("%d", mat[row][col]);
                first = 0;
                row--;
                col++;
            }
        } else {
            int col = (s < c) ? s : c - 1;
            int row = s - col;
            while (col >= 0 && row < r) {
                if (!first) printf(" ");
                printf("%d", mat[row][col]);
                first = 0;
                row++;
                col--;
            }
        }
    }
    printf("\n");
    return 0;
}
