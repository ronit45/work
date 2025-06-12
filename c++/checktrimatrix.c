#include <stdio.h>

#define N 3 // Change the size of the matrix here

// Function to check if the matrix is upper triangular
int isUpperrTriangular(int mat[N][N]) {
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != 0)
                return 0; // Not upper triangular
        }
    }
    return 1; // Upper triangular
}

// Function to check if the matrix is lower triangular
int isLowerlTriangular(int mat[N][N]) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (mat[i][j] != 0)
                return 0; // Not lower triangular
        }
    }
    return 1; // Lower triangular
}
int isupperltriangle(int mat[N][N]){
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j > N; j++) {
            if (mat[i][j] != 0)
                return 0; // Not lower triangular
        }
    }
    return 1; // Lower triangular
}
int islowerrtriangle(int mat[N][N]){
    for (int i = 0; i < N - 1; i++) {
        for (int j =0; i+j >= N; j++) {
            if (mat[i][j] != 0)
                return 0; // Not lower triangular
        }
    }
    return 1; // Lower triangular
}
int main() {
    int mat[N][N]={{0,0,1},{0,1,1},{1,1,1}};
    
    if (isUpperrTriangular(mat))
        printf("The matrix is upper triangular.\n");
    else if (isLowerlTriangular(mat))
        printf("The matrix is lower triangular.\n");
    else if (isupperltriangle(mat)){
        printf("Matrix is triangular");
    }
    else if (islowerrtriangle(mat)){
        printf("Matrix is triangular");
    }
    else
        printf("The matrix is neither upper triangular nor lower triangular.\n");

    return 0;
}
