
/**
 * 
 *  Explanation:
 * 
 *  ((a+b) * (c+d))
 *  output: ab+ , cd+, ab+cd+*
 *  [stack]: 
 *  loop : '(' continue;
 *          a...z: print()
 *          +...*: push()
 *          ')' pop()
 *          step: (continue), print(a), push(+), print(b) // output: ab
 *                pop() // output: ab+
 *                '*': push(*), (continue), print(c), push(+), print(d), pop() // output: ab+cd+*
 * 
 * 
 * 
 * 
 * */

#include <iostream>
using namespace std;

char stack[400];
int top = 0;

template <typename T>
void print(T val);
void push(int);
void pop();

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; s[i] != '\0'; i++)
        {

            if (s[i] >= 42 && s[i] < 48 || s[i] == 94)
            {
                push(s[i]);
            }
            else if (s[i] == '(')
            {
                continue;
            }
            else if (s[i] == ')')
            {
                pop();
            }
            else
            {
                print(s[i]);
            }
        }

        cout << "\n";
    }

    return 0;
}

void push(int op)
{
    if (top == 400)
    {
        print("stack overflow");
        return;
    }
    stack[++top] = op;
}
void pop()
{

    if (top == 0)
    {
        print("stack underflow");
        return;
    }
    print(stack[top]);
    stack[--top];
}
template <typename T>
void print(T val)
{
    cout << val;
}
