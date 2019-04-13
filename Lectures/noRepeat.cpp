#include<iostream>
using namespace std;


int unique(char x[]) {
    int store[200] = {0};
    for(int i=0; x[i]!='\0'; i++) {
        store[x[i]-'0']++;
        // cout<<x[i]-'0'<<endl;
    }
    int c = 0;
    for(auto x:store) {
        if(x != 0) c++;
    }

    return c;
}
int main() {

    char s[] = "My name is joshi";

    cout<<unique(s)<<endl;

    return 0;
}