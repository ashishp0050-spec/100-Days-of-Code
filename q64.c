#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    if (n < 0) n = -n;
    int freq[10] = {0};
    if (n == 0) freq[0]++;
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    int max_freq = 0;
    int best_digit = 0;
    for (int i = 0; i <= 9; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            best_digit = i;
        }
    }
    printf("%d\n", best_digit);
    return 0;
}
