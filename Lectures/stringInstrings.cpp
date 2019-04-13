#include <iostream>
using namespace std;

void split(char a[]) {
    char output[1000], *ans[100];
    int c=0,j=0,k=0;
    for(int i=0; a[i] != '\0'; i++) {
        
        if(a[i] == ' ') {
            // cout<<output<<" ";
            // output[c+1] = '\0';
            ans[k] = output;
            k++;
            j++;
            c = 0;
            continue;
        }
        // cout<<a[i]<<" ";
        output[c]= a[i];
        c++;
    }
    // ans[j] = '\0';

    cout<<ans[0];
    // for(auto i:ans) cout<<i<<" ";
}
int find(char *a, char *b) {

    split(a);
    return 1;
}
int main() {


    char s[] = "My name is Khan";
    char s1[] = "Khan";

    int val = find(s,s1);

}