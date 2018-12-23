#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *previous;
};

class List {
    Node *head, *tail;

public:
    List () {
        head = NULL;
        tail = NULL;
    }
    void createNode(int);
    void display();
    void displayReverse();
    void insertAtFront(int);
    void insertAtEnd(int);
    void popFront();
    void popBack();
    void deleteValue(int);
    void insertAtPosition(int,int);
    void emptyList();
};

void List :: createNode(int value) {
    Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        tail = temp;
        head->previous = NULL;
    } else {

        tail->next = temp;
        temp->previous = tail;
        tail = temp;

    }
}

void List :: display() {
    Node *temp = new Node;
    temp = head;
    while(temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void List :: displayReverse() {
    Node *temp = new Node;
    temp = tail;
    while(temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->previous;
    }
}

void List :: insertAtFront(int value) {
    if(head == NULL) {
        createNode(value);
        return;
    }
    Node *temp = new Node;
    temp->data = value;
    temp->next = head;
    head->previous = temp;
    head = temp;
}

void List :: insertAtEnd(int value) {
    if(head == NULL) {
        createNode(value);
        return;
    }
    Node *temp = new Node;
    temp->data = value;
    tail->next = temp;
    temp->previous = tail;
    temp->next = NULL;
    tail = temp;
}

void List :: popFront() {
    if (head == NULL) {
        emptyList();
        return;
    }
    Node *temp = new Node;
    temp = head;
    head = head->next;
    head->previous = NULL;
    delete temp;
}

void List :: popBack() {
    if (head == NULL) {
        emptyList();
        return;
    }
    Node *temp = new Node;
    temp = tail;
    tail = tail->previous;
    tail->next = NULL;
    delete temp;
}

void List :: deleteValue(int value) {
    if(head == NULL) {
        emptyList();
        return;
    }
    Node *q = new Node;
    if (head->data == value) {
        popFront();return;
    } else if (tail->data == value) {
        popBack();return;
    } else {
        q = head;
        while (q->next->next != NULL) {
            if (q->next->data == value) {
                Node *temp = new Node;
                temp = q->next;
                q->next = temp->next;
                temp->next->previous = q;
                free(temp);
                return;
            }
            q = q->next;
        }
    }

    cout<<"Not found";
}

void List :: insertAtPosition(int value, int pos) {

    Node *q = new Node;
    int counter = 0;
    if (pos == 0) {
        return;
    }
    if (pos == 1) {
        insertAtFront(value);
        return;
    }
    q = head;
    while (q != NULL)
    {
        q = q->next;
        counter++;
    }
    // cout<<"\ncounter:"<<counter<<" pos: "<<pos<<"\n";
    if (pos > counter) {
        cout<<"out of index";
        return;
    } else {
        q = head;
        for (int i = 1; i < pos; i++)
        {
            q = q->next;
            // if (q->next == NULL){
            //     insertAtEnd(value);
            //     return;
            // }
        }
        Node *temp = new Node;
        temp->data = value;
        q->previous->next = temp;
        temp->next = q;
        temp->previous = q->previous;
        q->previous = temp;
    }
    // temp->next = q->next;
    // q->next->previous = temp;
    // q->next = temp;
    // temp->previous = q;
}

void List :: emptyList() {
    cout<<"The list is empty\n";
    return;
}



int main() {

    List li;
    li.createNode(10);
    li.createNode(20);
    li.createNode(30);
    li.createNode(40);
    li.createNode(50);
    li.insertAtFront(50);
    li.insertAtEnd(100);
    li.popFront();
    li.display();
    li.popBack();
    li.deleteValue(50);
    li.insertAtPosition(200,4);
    li.display();
    return 0;
}
