#include <stdio.h>

void input(int arr[100], int n) {
    int i;
    for(i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
}

int binary_search(int arr[100], int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, key, result;
    int arr[100];

    printf("Enter number of elements for array (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Error: Invalid array size.\n");
        return 0;
    }

    printf("Enter %d elements in sorted (ascending) order:\n", n);
    input(arr, n);

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    result = binary_search(arr, n, key);

    if (result == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        printf("Element %d found at index %d.\n", key, result);
    }

    return 0;
}
