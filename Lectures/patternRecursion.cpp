#include<iostream>
using namespace std;



void pattern(int n) {
    if(n<=0)return;

    // cout<<n<<" ";
    pattern(n-1);
    while(n--){
        cout<<"*";
    }
    cout<<"\n";
    
}

int main() {


    pattern(5);
    return 0;
}