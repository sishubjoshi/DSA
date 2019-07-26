#include <bits/stdc++.h> 
using namespace std; 
typedef long long int lli;


template <class InputIterator, class InputIterator1>
bool getAns(InputIterator first, InputIterator1 second) {  
    
    while(*first != '\0' && *second != '\0') {
            // cout << *first << " | " << *second << endl;
            if(!(*first == *second)) return false;
        ++first; ++second;
    }

    // if(*first != '\0' || *second != '\0') {
    //     return false;
    // }

    return true;


}
int main() 
{ 
    freopen("in.txt", "r", stdin); freopen("o.txt", "w", stdout); 

    string s,r;
    cin >> s >> r;

    cout << (getAns(s.begin(), r.rbegin())? "YES\n" : "NO\n");
    // if(equal(s.begin(), s.end(), r.rbegin())) {
    //     cout << "Yes";
    // }
    // else cout << "NO";
    
    return 0; 
} 


