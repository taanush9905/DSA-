//Remove a loop from a linked list if it exists.
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
    while (p->next)
        p = p->next;
    p->next = temp;
}

bool detectAndRemoveLoop() {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = NULL;
            return true;
        }
    }
    return false;
}

void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, val, loopPos;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> val;
        insert(val);
    }
    cout << "Create loop? (0-No, 1-Yes): ";
    int choice; cin >> choice;
    if(choice){
        cout << "Enter node position to link last node to: ";
        cin >> loopPos;
        Node* temp = head;
        Node* loopNode = NULL;
        int count = 1;
        while(temp->next){
            if(count == loopPos) loopNode = temp;
            temp = temp->next;
            count++;
        }
        if(loopNode)
            temp->next = loopNode;
    }
    if(detectAndRemoveLoop()){
        cout << "Loop detected and removed.\n";
    } else {
        cout << "No loop found.\n";
    }
    cout << "Linked list after removing loop (if any): ";
    display();
    return 0;
}
