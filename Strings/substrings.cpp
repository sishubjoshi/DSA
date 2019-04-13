#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;


void subString(string str, char c, int n) {
    int count = 0;
    for(int i=0; i<=n; i++) {
        if(str[i] == c)count++;
        for(int j=i; j<=n; j++) {
            if(str[j] == c) {
                count++;
                // break;
            }
            for(int k=i; k<=j; k++)
                cout<<str[k];
            cout<<endl;
        }
    }

    cout<<count<<endl;
}
int main() {

    int t;
    cin>>t;
    while(t--) {
        int size;
        cin>>size;
        string s;
        char c;
        cin>>s>>c;
        // cout<<s;
        subString(s,c,size);
    }

    return 0;
}

