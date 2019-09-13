// It is one of the most efficient algorithms to generate prime numbers.


#include <bits/stdc++.h>
using namespace std;

void sieve(int num) {

    bool isprime[num+1];
    memset(isprime, true, num+1);

    for(int i=2; i*i <= num; i++) {

        if(isprime[i] == true) {

            for(int p=i*i; p <= num; p += i) {

                isprime[p] = false;
            }
        }
    }


    for(int i=2; i<=num; i++) {
        if(isprime[i] == true) {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

int main() {
    int num;
    // cin>>num;

    sieve(10);
    sieve(100);
    sieve(1000);
    sieve(10000);

    return 0;
}
