#include <stdio.h>

void merge(int m, int arr[], int n, int a[], int res[]) {
    for (int i = 0; i < m; i++) {
        res[i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        res[m + i] = a[i];
    }
}

int main() {
    int m, arr[100];
    int n, a[100];
    int res[200]; // Array to store merged elements

    printf("Enter number of elements for arr1: ");
    scanf("%d", &m);
    printf("Enter elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of elements for arr2: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    merge(m, arr, n, a, res);

    printf("\nMerged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
