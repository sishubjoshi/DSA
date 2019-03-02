#include <iostream>
using namespace std;

int gcd(int a, int b) {
    
    if(a==0 || a==b)return b;
    if(b == 0)return a;
    
    return a>b?gcd(a-b,b):gcd(a,b-a);
}

int main() {
	//code
	
	int n;
	cin>>n;
	while(n--) {
	    int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<"\n";
	}
	return 0;
}