// Ques: Sum of all prime numbers between 1 and N.


#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

const lli num = 1000001;
bool isprime[num];


// Generate prime numbers upto num;
void sieve() {
    
    memset(isprime, true, num);

    for(lli i=2; i*i <= num; i++) {
        
       if(isprime[i] == true) {
            for(lli p=i*i; p<= num; p+=i) {
                isprime[p] = false;
            
        }
       }
    }
}


void showPrime(lli num) {
    lli sum=0;
    for(int i=2; i<=num; i++) {
        if(isprime[i] == true) {
            sum+=i;
        }
    }
    cout<<sum;
}

int main() {
	//code
	int n;
	cin>>n;
	sieve(); // Call it once, Rather than calling for every input, it saves .14 seconds(approx.)
	while(n--) {
	    lli N;
	    cin>>N;
	    showPrime(N);
	    cout<<"\n";
	}
	return 0;
}