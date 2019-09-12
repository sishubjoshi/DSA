// SPOJ FCTRL2
// Factorial using multiplication method
#include <bits/stdc++.h> 
using namespace std; 
#define endl "\n";
const int MAX = 500;


int multiply(vector<int>& v, int size, int x)
{
        int carry = 0;

        for(int i=0; i<size; i++)
        {
                int product = v[i]*x + carry;
                v[i] = product%10;
                carry = product/10;
        }
        while(carry)
        {
                v[size] = carry%10;
                carry /= 10;
                size++;
        }
        return size;
}

void factorial(int n)
{
        vector<int> v(MAX);

        v[0] = 1;
        int size = 1;

        for(int i=2; i<=n; i++)
                size = multiply(v, size, i);
        
        // cout << v.size() << endl;
        for(int i=size-1; i>=0; i--)
                cout << v[i];
}

int main() 
{ 
        // freopen("in.txt", "r", stdin);freopen("o.txt", "w", stdout);
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n;
        cin >> n;
        while(n--)
        {
                int num;
                cin >> num;
                factorial(num);
                cout << endl;
        }
        return 0;
}


