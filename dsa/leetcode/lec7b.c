#include <stdio.h>
#include <math.h>

int poweroftwo(int n) {
    int i = 0;
    int m;
    while ((m = pow(2, i)) <= n) {
        if (m == n && n != 0) {
            return 1; // n is a power of two
        }
        i++;
    }
    return 0; // n is not a power of two
}

int main() {
    int n = 15;
    int ans = poweroftwo(n);
    printf("%d", ans);
    return 0;
}
