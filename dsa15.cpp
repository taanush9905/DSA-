//Implement a sparse matrix using a linked list.
#include <iostream>
using namespace std;

struct Node {
    int row, col, val;
    Node* next;
};

Node* head = NULL;

void insert(int r, int c, int v) {
    Node* temp = new Node{r, c, v, NULL};
    if (!head) {
        head = temp;
        return;
    }
    Node* p = head;
    while (p->next)
        p = p->next;
    p->next = temp;
}

void display() {
    cout << "Row Col Val\n";
    Node* p = head;
    while (p) {
        cout << p->row << " " << p->col << " " << p->val << "\n";
        p = p->next;
    }
}

int main() {
    int m, n;
    cout << "Enter rows and cols: ";
    cin >> m >> n;
    int mat[20][20];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (mat[i][j] != 0)
                insert(i, j, mat[i][j]);
        }
    display();
    return 0;
}
