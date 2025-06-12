#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i<n; i++) {  // use 0-based indexing
            int x;
            cin >> x;
            if(x==1) x=2;
            arr.push_back(x);
        }

        for (int i = 1; i<n; i++) {  // check up to n-2
            if(arr[i]%arr[i-1] == 0) arr[i]++;
        }

        for (int i = 0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
