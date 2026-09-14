#include <stdio.h>

void input(int arr[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int res[100][100], int n, int m) {
    int i, j;
    /* Note: The transposed matrix has n rows and m columns */
    for(i = 0; i < n; i = i + 1) {
        for(j = 0; j < m; j = j + 1) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

void transpose(int arr[100][100], int res[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            /* Swap rows and columns */
            res[j][i] = arr[i][j];
        }
    }
}

int main() {
    int m, n;
    int arr[100][100];
    int res[100][100];

    printf("Enter dimensions for matrix (m n): ");
    scanf("%d %d", &m, &n);

    if (m > 100 || n > 100) {
        printf("Error: Matrix dimensions cannot exceed 100.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    input(arr, m, n);

    transpose(arr, res, m, n);

    printf("Result of Matrix Transpose:\n");
    display(res, n, m);

    return 0;
}
