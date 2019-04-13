#include<iostream>
// #include<string.h>
using namespace std;
int strcmp(string s1, string s2) {
    int i;
    for(i=0; s1[i] == s2[i]; i++) {

        if(s1[i] == '\0')return 0;
    }

    return s1[i] - s2[i];
}

// void strcpy(string a, string b) {
//     int i=0,j=0;
//     while(b[j] != '\0') {
//         a[i] = b[j];
//         i++;j++;
//     }
// }
void sortStrings(string s[], int n) {

    // cout<<*s<<n;
    for(int i=0; i<n-1; i++) {

        for(int j=i; j<n-1; j++) {
            cout<<strcmp(s[j],s[j+1])<<endl;
            if(strcmp(s[j],s[j+1]) > 0) {
                string temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                // strcpy(temp, s[j]);
                // strcpy(s[j], s[j+1]);
                // strcpy(s[j+1], temp);
                // cout<<s[j]<<" "<<s[j+1];

            }
        }
    }
}

int main() {

    string str[5] = {"abc", "fff", "cde", "def"};
    int n = sizeof(str)/sizeof(str[0]);
    sortStrings(str,n);

    for(auto x:str)cout<<x<<" ";
}