#include <iostream>
using namespace std;

// Structure to represent a sparse matrix term
struct SparseMatrixTerm {
    int row;       // Row index of the non-zero element
    int col;       // Column index of the non-zero element
    int value;     // Value of the non-zero element
};

// Function to display a sparse matrix
void displaySparseMatrix(SparseMatrixTerm sparse[], int nonZeroCount) {
    cout << "\nSparse Matrix Representation:" << endl;
    cout << "Row  Column  Value" << endl;
    for (int i = 0; i < nonZeroCount; i++) {
        cout << sparse[i].row << "      " << sparse[i].col << "       " << sparse[i].value << endl;
    }
}

int main() {
    int rows, cols, nonZeroCount = 0;

    // Input matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Temporary 2D array to store the matrix
    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter the elements of the matrix (row-wise):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] != 0) {
                nonZeroCount++;  // Count non-zero elements
            }
        }
    }

    // Declare an array of SparseMatrixTerm to store non-zero elements
    SparseMatrixTerm sparse[nonZeroCount];

    // Populate sparse matrix structure
    int k = 0;  // Index for sparse matrix array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }

    // Display the sparse matrix
    displaySparseMatrix(sparse, nonZeroCount);

    return 0;
}
