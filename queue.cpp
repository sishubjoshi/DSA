#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
}*front=NULL,*rear=NULL;
void display() {
    Node *temp = new Node;
    temp = front;
    cout<<"Queue: ";
    while(temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void push(int value) {
    Node *temp = new Node;
    temp->data = value;
    if(front == NULL) {
        front = rear = temp;
        rear->next = NULL;
    } else {
        rear->next = temp;
        rear = temp;
        rear->next = NULL;
    }
    display();
}
void remove() {

    if(front == NULL) {
        cout<<"Empty queue\n";
    } else {
        cout<<"\nDeleted: ";
        Node *temp = new Node;
        temp = front;
        front = front->next;
        cout<<temp->data<<"\n";
        delete(temp);
    }
    display();
    
}


int main() {
    int n;
    cin>>n;
    while(n--) {
        int num; cin>>num;
        push(num);
        cout<<"\n";
    }
    while(n--) {
        while(front!=NULL) {
            remove();
            // cout<<"ff";
        }
    }
}