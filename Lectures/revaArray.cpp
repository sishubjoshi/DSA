#include<iostream>
using namespace std;



void search(int *a, int n) {
    if(n <0)return;
//    cout<<a[n]<<" ";
        // int temp = a[n];
        // a[n] = temp;
    
    search(a,n-1);
        cout<<a[n]<<" ";

    
}

int main() {


    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    search(arr,n-1);
    // for(int x: arr)cout<<x<<" ";
    return 0;
}