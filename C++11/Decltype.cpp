#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;
typedef long long int lli;

int main() {

    string value;

    cout << typeid(value).name() << endl;

    decltype(value) name = "Max";

    cout << typeid(name).name() << "\n" << name << endl;    
    return 0;
}