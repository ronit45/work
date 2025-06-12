#include <iostream>
using namespace std;

bool trisum(int arr[], int n, int target) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 3, 4, 5, 7};
    int target = 8;
    if (!trisum(arr, 5, target)) {
        cout << "No triplet found with the sum equal to " << target << endl;
    }
    return 0;
}
