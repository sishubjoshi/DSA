
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int item) {
    int low = 0;
    int high = n-1;
    item = 6;
    while(low <= high) {
        int mid = (low + high)/2;
        if(a[mid] == item) return mid;
        else if(a[mid] < item) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[10] ={1,2,3,4,5,6,7,8,9};

    // size of an array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Display
    for(int c: arr) cout<<c<<" ";

    // insertion
    int pos, item = 100;
    cin>>pos;
    for(int i = n-1; i >= pos; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = item;
    n++;
    // Insertion

    // Deletion
    int pos = 3;
    for(int i=pos; i<n; i++) arr[i] = arr[i+1];
    n--;
    // Deletion

    cout<<"array after element been deleted";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    // Binary Search
    int result = binarySearch(arr, n, 6);
    (result ? cout<<"element found at "<<result+1<<"\n":cout<<"not found");

}