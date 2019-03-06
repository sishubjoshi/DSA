#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int sum=0;

void findPower(int num,int n, int p) {

    sum += pow(n,p);

    if(sum <= num && sum >0) {
        v.push_back(n);
        cout<<"sum: "<<sum<<endl;
    }

    if(sum == num) {
            // for(auto it:v)cout<<"vec: "<<it<<" ";
        cout<<"woo";
        v.clear();
        sum = 0;
        return;
    }
    if(sum > num) {
        v.clear();
        sum = 0;
        // return false;
    }

    // cout<<n<<" "<<sum<<endl;
    findPower(num, n-1, p);


    return;
}
int main() {

    int n = 100,p=2;
    int c=0;
    findPower(n,10,p);
    for(auto t : v)cout<<t<<" ";

    return 0;
}