#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool possible(int arr[], int n, int m, int mid) {
    int sum = 0, student = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) // If any task's time exceeds mid, it's not possible to assign it to a student.
            return false;
        if (sum + arr[i] > mid) { // If the current student cannot take this task, assign it to a new student.
            student++;
            sum = arr[i];
        } else {
            sum += arr[i];
        }
        if (student > m) // If the number of students exceeds the limit, it's not possible.
            return false;
    }
    return true;
}

int main() {
    int arr[4] = {5, 17, 100, 11};
    int n = 4, s = 0, e = 0, ans = -1, m = 4;
    for (int i = 0; i < n; i++) {
        e += arr[i];
    }
    cout << e << "\n";
    int mid;
    while (s <= e) { // Note the change from < to <= here.
        mid = s + (e - s) / 2;
        if (possible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    cout << ans;
    return 0; // Return 0 from main to indicate successful execution.
}
