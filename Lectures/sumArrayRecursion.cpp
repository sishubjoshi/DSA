#include<iostream>
using namespace std;



int search(int *a, int n) {
    if(n == 0)return a[0];

    return a[n] + search(a,n-1);
//    cout<<a[n]<<" ";

    
}

int main() {


    int arr[]={2,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int s = search(arr,n-1);
    cout<<s;
    return 0;
}