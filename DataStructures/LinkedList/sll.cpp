#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class List
{
    Node *head, *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void insert(int);
    void display();
    void insertAtBeginning(int);
    void insertAtEnd(int);
    void popFront();
    void popBack();
    void insertAtPosition(int, int);
    void deleteAtposition(int);
    void deleteNode(int);
    void getNodes();
};

void List ::getNodes()
{

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}

void List ::insert(int value)
{

    if (head == NULL)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->next = NULL;

        head = temp;
        tail = temp;
    }
    else
    {
        insertAtEnd(value);
    }
}

void List ::insertAtBeginning(int value)
{

    Node *temp = new Node;
    temp->data = value;

    temp->next = head;
    head = temp;
}

void List ::insertAtEnd(int value)
{

    Node *temp = new Node;
    temp->data = value;

    tail->next = temp;
    tail = temp;
}

void List ::insertAtPosition(int pos, int value)
{

    Node *current, *previous = new Node;
    current = head;

    for (int i = 0; i < pos - 1; i++)
    {

        if (current == tail && i < pos - 1)
        {
            cout << "sorry, Overflow!!!\n";
            return;
        }

        previous = current;
        current = current->next;
    }
    Node *temp = new Node;
    temp->data = value;
    temp->next = current;
    previous->next = temp;
}

void List ::popFront()
{
    Node *temp = new Node;
    temp = head;

    head = head->next;
    delete (temp);
}

void List ::popBack()
{

    Node *temp = head;

    while (temp->next->next != NULL)
    {

        // cout << temp->data << " ";
        temp = temp->next;
    }
    tail = temp;
    tail->next = NULL;
}

void List ::deleteAtposition(int pos)
{
    if (pos == 1)
    {
        popFront();
        return;
    }
    Node *current, *previous;
    current = head;
    previous = new Node;

    for (int i = 0; i < pos - 1; i++)
    {

        if (current->next == NULL && i < pos - 1)
        {
            cout << "Sorry out of index!!";
            return;
        }

        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete (current);
    // cout << previous->data << " " << current->data << endl;
}

void List ::deleteNode(int value)
{

    Node *current = head;
    Node *previous = new Node;
    int pos = 0, flag = 0;
    while (current != NULL)
    {

        if (current->data == value)
        {
            previous->next = current->next;
            delete (current);
            flag = 1;
            return;
        }
        previous = current;

        current = current->next;
    }

    if (!flag)
    {
        cout << "Element not found!!\n";
    }
}
void List ::display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    List li;
    li.insert(10);
    li.insert(10);
    li.insertAtBeginning(50);
    li.insert(10);
    li.insert(80);
    li.insert(100);
    // li.display();
    // li.popFront();
    // li.getNodes();
    // li.popBack();
    // cout << endl;
    li.display();
    cout << endl;
    // li.getNodes();
    // li.insertAtPosition(4, 1000);
    // li.deleteAtposition(5);
    li.deleteNode(80);
    li.display();

    return 0;
}