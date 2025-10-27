#include <iostream>
using namespace std;

#define null 0

struct Node {
    int data;
    Node *next;
};

Node *first = null, *temp = null, *ttemp = null;
Node *evenFirst = null, *oddFirst = null;
Node *evenTemp = null, *oddTemp = null;

void createfirst(int val) {
    first = new Node;
    first->data = val;
    first->next = null;
}

void Addnode(int val) {
    temp = first;
    while (temp->next != null)
        temp = temp->next;

    ttemp = new Node;
    ttemp->data = val;
    ttemp->next = null;
    temp->next = ttemp;
}

void disp(Node *start) {
    temp = start;
    while (temp != null) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to split into even and odd lists
void splitEvenOdd() {
    temp = first;
    while (temp != null) {
        if (temp->data % 2 == 0) {
            // Even number
            if (evenFirst == null) {
                evenFirst = new Node;
                evenFirst->data = temp->data;
                evenFirst->next = null;
                evenTemp = evenFirst;
            } else {
                evenTemp->next = new Node;
                evenTemp = evenTemp->next;
                evenTemp->data = temp->data;
                evenTemp->next = null;
            }
        } else {
            // Odd number
            if (oddFirst == null) {
                oddFirst = new Node;
                oddFirst->data = temp->data;
                oddFirst->next = null;
                oddTemp = oddFirst;
            } else {
                oddTemp->next = new Node;
                oddTemp = oddTemp->next;
                oddTemp->data = temp->data;
                oddTemp->next = null;
            }
        }
        temp = temp->next;
    }
}

int main() {
    // Create linked list with values 1 to 10
    createfirst(1);
    for (int i = 2; i <= 10; i++)
        Addnode(i);

    cout << "Original Linked List:" << endl;
    disp(first);

    // Split into even and odd
    splitEvenOdd();

    cout << "\nEven Linked List:" << endl;
    disp(evenFirst);

    cout << "\nOdd Linked List:" << endl;
    disp(oddFirst);

    return 0;
}