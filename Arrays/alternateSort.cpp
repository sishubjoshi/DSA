// Alternate sort

/* Testcase 1
    Input:
    1
    5
    1 4 6 2 1
    Output:
    1 6 2 4 1
*/
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--) {
        int size;
        cin>>size;
        long long int arr[size];
        for(int i=0; i<size; i++) cin>>arr[i];
        for(int i=0; i<size-1; i++) {
            if(i%2==0) {
                if(arr[i] >= arr[i+1]) {
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            } else {
                if(arr[i] <= arr[i+1]) {
                    int temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for(int x:arr) cout<<x<<" ";
        cout<<"\n";
    }

    return 0;
}