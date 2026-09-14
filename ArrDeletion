#include <stdio.h>

void display(int arr[], int n)
{
    int i;
    printf("\nArray elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int deleteBeginning(int arr[], int n)
{
    int i;
    if(n == 0)
    {
        printf("Array is empty!\n");
        return n;
    }

    for(i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int deletePosition(int arr[], int n)
{
    int i, pos;

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid Position!\n");
        return n;
    }

    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}

int deleteEnd(int arr[], int n)
{
    if(n == 0)
    {
        printf("Array is empty!\n");
        return n;
    }

    return n - 1;
}

int main()
{
    int arr[100], n, i, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Delete from Beginning");
    printf("\n2. Delete from Position");
    printf("\n3. Delete from End");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            n = deleteBeginning(arr, n);
            break;

        case 2:
            n = deletePosition(arr, n);
            break;

        case 3:
            n = deleteEnd(arr, n);
            break;

        default:
            printf("Invalid Choice!\n");
            return 0;
    }

    display(arr, n);

    return 0;
}
