//Create a linear queue using linked list and implement enqueue, dequeue, and display operations.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node *front, *rear;
public:
    Queue() { front = rear = NULL; }

    void enqueue(int val){
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        if(rear == NULL){
            front = rear = newNode;
            cout << val << " inserted into queue\n";
            return;
        }
        rear->next = newNode;
        rear = newNode;
        cout << val << " inserted into queue\n";
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        cout << "Deleted element: " << front->data << endl;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
    }

    void display(){
        if(front == NULL){
            cout << "Queue is Empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
