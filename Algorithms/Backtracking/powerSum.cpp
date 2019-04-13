#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int sum=0, total=0;

 int findPower(int num,int p, int n, int c) {

    // //  if(n == 10)return ;
    sum += pow(n,p);
    cout<<"sum: "<<sum<<endl;
    if(num < sum) {
        return 0;
    }

    if(num == sum) {
        c++;
        sum = 0;
        cout<<c<<endl;
        return 1;
    }
    else {

    for(int i=n+1; pow(n,p) <= num; i++) {
        findPower(num, p, n+1, c); 
        cout<<"ff"<<pow(n,p)<<endl;
    }
    
    }
    return total;


}
int main() {

    int n = 13,p=2;
    int c=0;
    findPower(n,p,2,c);
    // for(auto t : v)cout<<t<<" ";
    cout<<n;
    return 0;
}