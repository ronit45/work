#include<bits/stdc++.h>
using namespace std;

void lcs(int n, int m, string& s1, string& s2) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    
    // Fill the dp array
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    // Find the LCS
    int len = dp[n][m];
    string ans(len, '$'); // Create a string of '$' of length len
    int i = n, j = m, index = len - 1;
    
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            ans[index] = s1[i - 1];
            index--;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    
    cout << ans;
}

int main() {
    string s1 = "ababa";
    string s2 = "cbbcad";
    int n = s1.length();
    int m = s2.length();
    lcs(n, m, s1, s2);
    return 0;
}
