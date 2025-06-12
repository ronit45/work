#include<stdio.h>

int complement(int n) {
    int mask = 0;
    int temp = n; // Temporary variable to store the absolute value of n

    // Calculate the number of bits required for the mask
    while (temp != 0) {
        mask <<= 1;
        mask |= 1;
        temp >>= 1;
    }

    // Apply the one's complement operation
    int ans = ~n & mask;
    return ans;
}

int main() {
    int n = 7;
    int ans = complement(n);
    printf("%d", ans);

    return 0;
}
