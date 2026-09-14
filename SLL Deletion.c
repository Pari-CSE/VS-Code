#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    
    newNode->data = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_node(struct Node** head, int val) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == val) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, i, val, del_val;

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    for (i = 0; i < n; i = i + 1) {
        printf("Enter element: ");
        scanf("%d", &val);
        insert(&head, val);
    }

    printf("List before deletion: ");
    display(head);

    printf("Enter element to delete: ");
    scanf("%d", &del_val);

    delete_node(&head, del_val);

    printf("List after deletion: ");
    display(head);

    return 0;
}
