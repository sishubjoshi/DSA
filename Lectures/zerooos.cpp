
#include <iostream>
using namespace std;
int main() {
	int a[] = {1,0,2,0,4,0,0,5,6,7};
	int j=10-1;
	for(int i=0; i<j-1; i++) {
		if(a[i] == 0) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
	
		}
		// cout<<sizeof(a)/sizeof(a[0]);
	}
			for(int x:a)cout<<x<<" ";

	return 0;
}