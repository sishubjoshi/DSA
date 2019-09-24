// SPOJ - ONP
// Name: Transform the expression

#include <bits/stdc++.h> 
using namespace std; 
#define endl "\n";
const int MAX = 500;

void RPN(const string s)
{
        stack<char> store;

        auto isOperator = [](char ch) { return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^'); };
        for(int i=0; s[i] != '\0'; i++)
        {
                char ch = s[i];

                if(isOperator(ch))
                        store.push(ch);
                else if(ch == '(')
                        continue;
                else if(ch == ')')
                        cout << store.top(), store.pop();
                else cout << ch;
        }
}
int main() 
{ 
        // freopen("in.txt", "r", stdin);freopen("o.txt", "w", stdout);
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n;
        cin >> n;
        while(n--)
        {
                string s;
                cin >> s;
                RPN(s);
                cout << endl;
        }
        return 0;
}


