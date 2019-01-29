#include <iostream>

using namespace std;

struct Node {

    int data;
    Node *next;
};

class List {

    Node *head, *tail;
public:
    List() {
        head = NULL;
        tail = NULL;
    }
    void createNode(int);
    void insertAtStart(int);
    void insertAtLast(int);
    void insertAfter(int, int);
    void deleteNode(int);
    void display();
    void popFront();
    void popBack();
    void popAtPosition(int);
};

void List :: createNode(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
        tail = temp;
        temp = NULL;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void List :: insertAtStart(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

void List :: insertAtLast(int value) {
    Node *temp = new Node;
    temp->data = value;
    tail-> next = temp;
    tail = temp;
}

void List :: insertAfter(int value, int pos) {
    Node *previous, *current, *temp;
    previous = new Node;
    current = new Node;
    temp = new Node;
    current = head;

    for( int i=0; i<pos; i++) {
        previous = current;
        current = current->next;
    }
    temp->data = value;
    previous->next = temp;
    temp->next = current;

}

void List :: display() {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

void List :: popFront() {

    Node *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
}

void List :: popBack() {
    Node *previous, *current;
    previous = new Node;
    current = new Node;
    current = head;

    while(current->next != NULL) {
        previous = current;
        current = current->next;
    }
    tail = previous;
    previous->next = NULL;
    delete current;
}

void List :: popAtPosition(int pos) {

    if(pos == 1)popFront();
    else {
        Node *previous, *current;
        previous = new Node;
        current = new Node;
        current = head;

        for( int i=1; i<pos;i++) {
            if(current != NULL) {
            previous = current;
            current = current->next;
            } else {
                cout<<"Sorry! Out of Index.";
                return;
            }
        }
        Node *temp = new Node;
        temp = current->next;
        previous->next = temp;
        delete current;
    }
}

int main() {

    List li;
    li.createNode(60);
    li.createNode(10);
    li.createNode(10);
    li.createNode(10);
    li.insertAtStart(20);
    li.insertAtLast(50);
    li.createNode(10);
    li.insertAfter(100, 6);
    //li.popFront();
    //li.popBack();
    li.display();
    int n;
    cin>>n;
    li.popAtPosition(n);
    li.display();
    return 0;
}
