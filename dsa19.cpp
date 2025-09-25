//Implement push, pop, peek, and traverse operations on stack using linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = NULL; }

    void push(int val){
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << val << " pushed into stack\n";
    }

    void pop(){
        if(top == NULL){
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        cout << "Popped element: " << top->data << endl;
        top = top->next;
        delete temp;
    }

    void peek(){
        if(top == NULL){
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Top element is: " << top->data << endl;
    }

    void traverse(){
        if(top == NULL){
            cout << "Stack is Empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.display();
    st.pop();
    st.peek();
    st.traverse();
    return 0;
}
