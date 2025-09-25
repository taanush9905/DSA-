//Create a singly linked list and reverse the linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void createList(Node*& head, int arr[], int n) {
    for (int i = 0; i < n; i++) {
        Node* newNode = createNode(arr[i]);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}

void reverseList(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    createList(head, arr, n);
    cout << "Original List: ";
    displayList(head);

    reverseList(head);
    cout << "Reversed List: ";
    displayList(head);

    cout << "Name: TAANUSH" << endl;
    cout << "Enrollment No: 12414812724" << endl;

    return 0;
}
