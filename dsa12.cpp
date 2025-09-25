//Write a program to create a student linked list and perform insertion at a specified position, deletion by roll number, and reversal of the linked list.
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int rollNo;
    string name;
    Node* next;
};

Node* createNode(int rollNo, string name) {
    Node* newNode = new Node;
    newNode->rollNo = rollNo;
    newNode->name = name;
    newNode->next = NULL;
    return newNode;
}

void insertAtPosition(Node*& head, int rollNo, string name, int pos) {
    Node* newNode = createNode(rollNo, name);
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos-1; i++)
        temp = temp->next;
    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteByRoll(Node*& head, int rollNo) {
    if (head == NULL) return;
    if (head->rollNo == rollNo) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->rollNo != rollNo)
        temp = temp->next;
    if (temp->next == NULL) {
        cout << "Roll number not found!" << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
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
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << "Roll No: " << temp->rollNo << ", Name: " << temp->name << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    insertAtPosition(head, 101, "Aaryan", 1);
    insertAtPosition(head, 102, "Ayush", 2);
    insertAtPosition(head, 103, "Bunty", 2);
    cout << "List: " << endl;
    displayList(head);
    deleteByRoll(head, 102);
    cout << "After deleting Roll 102: " << endl;
    displayList(head);
    reverseList(head);
    cout << "After Reversing: " << endl;
    displayList(head);
    return 0;
}
