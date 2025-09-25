//Create a circular linked list with college data and perform insertion at the front and deletion at the end.
#include <iostream>
using namespace std;

struct CNode {
    string college;
    CNode* next;
};

class CircularList {
    CNode* head;
public:
    CircularList() { head = NULL; }
    
    void insertFront(string name) {
        CNode* newnode = new CNode;
        newnode->college = name;
        if (head == NULL) {
            head = newnode;
            newnode->next = newnode;
            return;
        }
        CNode* temp = head;
        while (temp->next != head)
            temp = temp->next;
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }

    void deleteEnd() {
        if (head == NULL) return;
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }
        CNode* temp = head;
        while (temp->next->next != head)
            temp = temp->next;
        CNode* last = temp->next;
        temp->next = head;
        delete last;
    }

    void display() {
        if (head == NULL) return;
        CNode* temp = head;
        do {
            cout << temp->college << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularList c;
    c.insertFront("CollegeA");
    c.insertFront("CollegeB");
    c.insertFront("CollegeC");
    c.display();
    c.deleteEnd();
    c.display();
    return 0;
}
