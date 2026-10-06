#include <stdio.h>

int main() {
    int n;
    while (scanf("%*[^0-9]"), scanf("%d", &n) == 1) {
        long long total = (long long)n * (n + 1) / 2;
        int ans = -1;
        for (long long x = 1; x <= n; x++) {
            if (x * x == total) {
                ans = (int)x;
                break;
            }
        }
        printf("%d\n", ans);
        return 0;
    }
    return 0;
}
