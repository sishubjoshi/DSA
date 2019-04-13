
#include <bits/stdc++.h>
using namespace std;

void concat(char *a, char *b) {
    int c1=0, c2=0;

    for(char i=0; a[i]!='\0'; i++) {
        // cout<<"i"<<endl;
        // cout<<a[i]<<endl;
        c1++;
    }

    for(char i=0; b[i]!='\0'; i++) {
        // cout<<"i"<<endl;
        // cout<<b[i]<<endl;
        c2++;
    }

    char s[c1+c2];

    for(int i=0; i<c1; i++ ) {

        s[i] = a[i];
    }

    for(int i=0; i<c2; i++ ) {
        // cout<<"index:"<<i;
        s[c1+i] = b[i];
    }
    s[c1+c2] = '\0';
    for(int i=0; s[i] !='\0'; i++)cout<<s[i]<<" ";
    // return s;
}
int main() {
    char a[] = "hello", b[] = " world";
    // cout<<concat(a,b);
    concat(a,b);
}