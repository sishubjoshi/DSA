#include<iostream>
#include "vector.h"
using namespace std;
typedef long long int lli;

int main() {

    // vector<int> v(3);

    // v.push_back(10);
    // v.push_back(23);
    // v.push_back(32);

    // for(int i=0; i<v.size(); i++) {
    //     cout << v.get(i) << endl;
    // }

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    //     cout << *it << endl;
    // }

    // for(auto val: v) {
    //     cout << val << endl;
    // }

    int *t = new int[4];
    t[0] = 1, t[1] = 2;
    cout << sizeof t;

    int *m = new int[10];
    m[0] = t[0];
    m[1] = t[1];
    t = m;
    free(m);
    cout << sizeof t;
    for(int i=0; i<2; i++) {
        cout << t[i] << " ";
    }
return 0;
}