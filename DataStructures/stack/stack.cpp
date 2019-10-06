#include <iostream>
using namespace std;


class Stack {
    int *stack, top;
    const int max = 100;
    public:
    Stack() {
        stack = new int[max];
        top = -1;
    }
    ~Stack() {
        delete [] stack;
    }
    void push(int);
    void pop();
    void display();
    bool isempty();
};

bool Stack :: isempty() {
    return top== -1;
}

void Stack :: push(int value) {
    // cout<<stack[0];
    if (top < max) {
        stack[++top] = value;
    } else {
        cout<<"Overflow\n";
    }

}

void Stack :: pop() {
    if(top > -1) {
        --top;
    }
}

void Stack :: display() {
    for(int i=0; i<= top; i++) {
        cout<<stack[i]<<" ";
    }
    // cout<<stack[0];
}

int main() {
    Stack stk;
    stk.isempty();
    // stk.push(10);
    // stk.push(20);
    // stk.push(30);
    // stk.push(40);
    stk.push(50);
    stk.pop();
    stk.display();
    
    bool cap = stk.isempty();
    (cap == true? cout<<"yes":cout<<"no");
    return 0;
}