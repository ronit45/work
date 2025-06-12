#include<iostream>
using namespace std;

void swapa(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int arr[4] = {6, 2, 3, 8};
    swapa(arr, 4);
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
