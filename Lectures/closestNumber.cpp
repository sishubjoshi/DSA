#include <iostream>
using namespace std;


void getall(int a, int b) {
    if(a>0) {
        int l = a - a%b;
        int r = a + (b - a%b);
        cout<<l<<" "<<r;
        
        if(abs(a-l) == abs(a-r)) {
           int ans = abs(l)>abs(r)?l:r; 
           cout<<ans<<endl;
        } else {
            int ans = abs(a-l)<abs(a-r)?l:r;
            cout<<ans;
        }
        
    } else {
        int l = a - a%b;
        int r = a - (b + a%b);
        //  cout<<l<<" "<<r;
         
         if(abs(abs(a)-abs(l)) == abs(abs(a)-abs(r))) {
             cout<<l<<" 2nd "<<r;
             int ans = abs(l)>abs(r)?l:r;
             cout<<ans<<endl;
         } else {
            //  cout<<l<<" "<<abs(abs(a)-abs(l))<<" 3rd "<<r<<" "<<abs(abs(a)-abs(r));
             int ans = abs(abs(a)-abs(l)) < abs(abs(a)-abs(r))?l:r;
             cout<<ans;
         }
    }
    
}
int main() {
	//code
	int n;
	cin>>n;
	while(n--) {
	    int a, b;
	    cin>>a>>b;
	   // cout<<getall(a,b);
	   getall(a,b);
	    cout<<endl;
	}
	return 0;
}