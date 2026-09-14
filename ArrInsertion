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

int insertBeginning(int arr[], int n)
{
    int i, element;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = element;
    return n + 1;
}

int insertPosition(int arr[], int n)
{
    int i, pos, element;

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position!\n");
        return n;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;

    return n + 1;
}

int insertEnd(int arr[], int n)
{
    int element;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    arr[n] = element;

    return n + 1;
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

    label:
        printf("\n\nChoose:");

    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at Position");
    printf("\n3. Insert at End");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            n = insertBeginning(arr, n);
            break;

        case 2:
            n = insertPosition(arr, n);
            break;

        case 3:
            n = insertEnd(arr, n);
            break;

        default:
            printf("Invalid Choice!\n");
            break;
    }

    display(arr, n);
    goto label;

    return 0;
}
