#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

auto sum(const vector<int>& x) -> int {

    return accumulate(x.begin(), x.end(), 0);
}
template <class T, class S>
auto add(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int main() {
    auto name = "Hello";


    vector<int> v{1,2,3,4,5};

    for(auto x: v)
        cout << x << " ";
    
    cout << endl;
    cout << sum(v) << endl;

    // Trying to add two numbers
    cout << add(4,5) << endl;
return 0;
}