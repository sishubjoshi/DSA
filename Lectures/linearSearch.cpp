#include<iostream>
using namespace std;



int search(int *a, int n, int num) {
    if(n<0)return -1;
    if(num == a[n])return n;

    return search(a,n-1,num);
//    cout<<a[n]<<" ";

    
}

int main() {


    int arr[]={1,2,5,3,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int s = search(arr,n-1,5);
    cout<<s;
    return 0;
}