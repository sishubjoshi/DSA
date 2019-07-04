#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int getPaths(int m, int n) {


    if(m == 1 || n == 1) {
        return 1;
    }


    return getPaths(m-1, n) + getPaths(m, n-1);
}

int main() {

    int paths = getPaths(10,10);
    cout << paths;
return 0;
}