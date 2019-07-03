#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



int modular(int base, lli exp, lli mod)
{
    lli x = 1;
    lli power = base % mod;

    for (int i = 0; i < sizeof(int) * 8; i++) {
        lli least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }

return x;
}

    

int main() {


    // cout << modular(2, 1000000000, 1000000007);
    printf("%d", (2 << (100-1))%1000000007 );
return 0;
}