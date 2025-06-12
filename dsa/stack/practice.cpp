#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void gaussElimination(vector<vector<double>> &matrix, vector<double> &result, int n) {
    // Forward elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        double diag = matrix[i][i];
        for (int j = 0; j < n + 1; j++) {
            matrix[i][j] /= diag;
        }

        // Make the elements below the diagonal 0
        for (int k = i + 1; k < n; k++) {
            double factor = matrix[k][i];
            for (int j = 0; j < n + 1; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back substitution
    for (int i = n - 1; i >= 0; i--) {
        result[i] = matrix[i][n];
        for (int j = i + 1; j < n; j++) {
            result[i] -= matrix[i][j] * result[j];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of equations: ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n + 1));
    vector<double> result(n);

    cout << "Enter the augmented matrix (coefficients and constants):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            cin >> matrix[i][j];
        }
    }

    gaussElimination(matrix, result, n);

    cout << "Solution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i + 1 << "] = " << fixed << setprecision(4) << result[i] << endl;
    }

    return 0;
}
