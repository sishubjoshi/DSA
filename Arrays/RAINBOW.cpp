/*
    Codechef problem code: RAINBOWA
    Input: 1 2 3 4 5 6 7 6 5 4 3 2 1
    Output: yes

*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--) {
		int size;
		cin>>size;
		int a[size], b[11]={0},i, j=0;
		for(i=0; i<size; i++) {
			cin>>a[i];
			b[a[i]]++;
		}
		// for(int x: b)cout<<x<<" ";

		int p=1;

		if(b[8]!=0 || b[9]!=0 || b[10]!=0) {
			p=0;
		} else {

			// in order and even number of occurances
			for(i=1; i<7; i++) {
			if(b[i] != 0 && b[i]%2==0) {
				continue;
				} else {
					p=0;
					break;
				}
			}


			while(i < j) {
				if(a[i] != a[j]) {
					p=0;
					break;
				} 
				i++;
				j--;
			}
		}

		if(p==1 && b[7] == 1) {
				cout<<"yes\n";
			} else {
				cout<<"no\n";
			}
		
		



	
	}

	return 0;
}