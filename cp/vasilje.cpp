#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        long long mini = 1LL * k * (k + 1) / 2;
        long long maxi = 1LL * k * (2 * n - k + 1) / 2;
        if (mini <= x && x <= maxi) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
