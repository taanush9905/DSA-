//write a program to remove duplicates from a singly linked list and count the number of duplicates.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int countDuplicates(struct Node* head) {
    int count = 0;
    struct Node* ptr1 = head;
    while (ptr1 != NULL) {
        struct Node* ptr2 = ptr1->next;
        while (ptr2 != NULL) {
            if (ptr1->data == ptr2->data) {
                count++;
                break;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return count;
}

int main() {
    struct Node* head = NULL;
    int n, value;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i+1);
        scanf("%d", &value);
        insertEnd(&head, value);
    }
    printf("Number of duplicate elements: %d\n", countDuplicates(head));
    return 0;
}
