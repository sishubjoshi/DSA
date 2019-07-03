// It is one of the most efficient algorithms to generate random numbers.


#include <bits/stdc++.h>
using namespace std;
bool isprime[10000];

void sieve() {

    memset(isprime, true, 10000);

    for(int i=2; i*i <= 10000; i++) {

        if(isprime[i] == true) {

            for(int p=i*i; p <= 10000; p += i) {

                isprime[p] = false;
            }
        }
    }
}


void num_to_arrays(vector<int> &a, int num) {
    int i=3;
    while(num) {
        a[i] = num%10;
        num = num/10;
        i--;
    }
    // for(auto x: a[])cout << x<<endl;

    cout << "output: ";
    for(int i=0; i<4; i++) cout << a[i] << endl;
}
int main() {
    int num;
    // cin>>num;
    sieve();
    // cout << isprime[8179] << endl;

    int T;
    cin >> T;
    while(T--) {

        int l,h;
        cin >> l >> h;
        vector<int> v(4);
        num_to_arrays(v, l);
        num_to_arrays(v, h);
        // queue<int> q;
        // q.push(l);
        // while(!q.empty()) {

        //     int val = q.front();
        //     q.pop();

        //     for(int i=1; i<=9; i++) {

        //     }
        // }
        
    }

    return 0;
}