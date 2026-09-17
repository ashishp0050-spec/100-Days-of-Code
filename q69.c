#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = -1e9, max2 = -1e9;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if (max2 == -1e9) {
        max2 = max1;
    }
    printf("%d\n", max2);
    return 0;
}
