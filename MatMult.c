#include <stdio.h>

void input(int arr[100][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < n; j = j + 1) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int res[100][100], int m, int q) {
    int i, j;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < q; j = j + 1) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

void multiply(int arr[100][100], int a[100][100], int res[100][100], int m, int n, int p, int q) {
    int i, j, k;
    for(i = 0; i < m; i = i + 1) {
        for(j = 0; j < q; j = j + 1) {
            res[i][j] = 0; 
            for(k = 0; k < n; k = k + 1) {
                res[i][j] = res[i][j] + (arr[i][k] * a[k][j]);
            }
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

    if (n != p) {
        printf("Error: Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    printf("Enter elements of the first matrix:\n");
    input(arr, m, n);

    printf("Enter elements of the second matrix:\n");
    input(a, p, q);

    multiply(arr, a, res, m, n, p, q);

    printf("Result of Matrix Multiplication:\n");
    display(res, m, q);

    return 0;
}
