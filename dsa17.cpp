//Segregate even and odd nodes in a linked list — even nodes followed by odd nodes.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int val) {
    Node* temp = new Node{val, NULL};
    if (!head) {
        head = temp;
        return;
    }
    Node* p = head;
    while(p->next) p = p->next;
    p->next = temp;
}

void segregateEvenOdd() {
    Node *evenStart = NULL, *evenEnd = NULL, *oddStart = NULL, *oddEnd = NULL, *curr = head;
    while(curr){
        if(curr->data % 2 == 0){
            if(!evenStart) evenStart = evenEnd = curr;
            else {
                evenEnd->next = curr;
                evenEnd = curr;
            }
        } else {
            if(!oddStart) oddStart = oddEnd = curr;
            else {
                oddEnd->next = curr;
                oddEnd = curr;
            }
        }
        curr = curr->next;
    }
    if(!evenStart || !oddStart) return;
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    head = evenStart;
}

void display() {
    Node* p = head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter data for node " << i+1 << ": ";
        cin >> val;
        insert(val);
    }
    cout << "Original list: ";
    display();
    segregateEvenOdd();
    cout << "After segregation (Even nodes followed by Odd nodes): ";
    display();
    return 0;
}
