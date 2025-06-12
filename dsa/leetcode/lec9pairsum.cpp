#include<iostream>
using namespace std;

void pairsum(int arr[], int n) {
    bool value = false;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[i] + arr[j]) == n) {
                value = true;
                break; // Stop further iterations once a pair is found
            }
        }
        if(value) {
            break; // Stop further iterations if a pair is found
        }
    }
    if(value) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    pairsum(arr, 5);
    return 0;
}
