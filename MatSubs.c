#include <stdio.h>

void input(int arr[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int res[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

void sub(int arr[100][100], int a[100][100], int res[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            res[i][j] = arr[i][j] - a[i][j];
        }
    }
}

int main() {
    int m, n, p, q;
    int arr[100][100];
    int a[100][100];
    int res[100][100];

    printf("Enter dimensions for first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter dimensions for second matrix (p q): ");
    scanf("%d %d", &p, &q);

    if (m != p || n != q) {
        printf("Error: Matrices must have the same dimensions for subtraction.\n");
        return 0;
    }

    printf("Enter elements of the first matrix:\n");
    input(arr, m, n);

    printf("Enter elements of the second matrix:\n");
    input(a, p, q);

    sub(arr, a, res, m, n);

    printf("Result of Matrix Subtraction:\n");
    display(res, m, n);

    return 0;
}
