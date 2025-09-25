//implement two stacks using a single array.
#include <iostream>
#define MAX 100

using namespace std;

class TwoStacks {
    int arr[MAX];
    int top1, top2;
public:
    TwoStacks() {
        top1 = -1;
        top2 = MAX;
    }
    void push1(int x){
        if(top1 < top2 - 1){
            arr[++top1] = x;
        } else {
            cout << "Stack Overflow in Stack 1\n";
        }
    }
    void push2(int x){
        if(top1 < top2 - 1){
            arr[--top2] = x;
        } else {
            cout << "Stack Overflow in Stack 2\n";
        }
    }
    void pop1(){
        if(top1 >= 0){
            cout << "Popped element from Stack 1: " << arr[top1--] << endl;
        } else {
            cout << "Stack Underflow in Stack 1\n";
        }
    }
    void pop2(){
        if(top2 < MAX){
            cout << "Popped element from Stack 2: " << arr[top2++] << endl;
        } else {
            cout << "Stack Underflow in Stack 2\n";
        }
    }
    void display1(){
        if(top1 >=0){
            cout << "Stack 1 elements: ";
            for(int i=0;i<=top1;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        } else cout << "Stack 1 is Empty\n";
    }
    void display2(){
        if(top2 < MAX){
            cout << "Stack 2 elements: ";
            for(int i=MAX-1;i>=top2;i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        } else cout << "Stack 2 is Empty\n";
    }
};

int main() {
    TwoStacks ts;
    ts.push1(10);
    ts.push2(20);
    ts.display1();
    ts.display2();
    ts.pop1();
    ts.pop2();
    return 0;
}
