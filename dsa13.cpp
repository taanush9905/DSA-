//Create a doubly linked list with employee data and perform insertion at the front and deletion at the end
#include <iostream>
using namespace std;

struct Node {
    int empid;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insertFront(int id) {
    Node* newnode = new Node;
    newnode->empid = id;
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
}

void deleteEnd() {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->prev->next = NULL;
    delete temp;
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->empid << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertFront(101);
    insertFront(102);
    insertFront(103);
    display();
    deleteEnd();
    display();
    return 0;
}
