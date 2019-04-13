#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *next;
};

Node *start = NULL;

void insertAtFirst(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->next = start;
    start = temp;
    // delete temp;
}

void insertAtLast(int value) {

    Node *temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node *p = new Node;
    p->data = value;
    p->next = NULL;
    temp->next = p;
    // delete p;
    // delete temp;

}
void display() {
    Node *temp = start;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {

    insertAtFirst(10);
    insertAtFirst(10);
    insertAtFirst(10);
    insertAtLast(100);
    display();
    return 0;
}