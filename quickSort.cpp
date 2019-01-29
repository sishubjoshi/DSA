#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int pivotPosition = low;

    for(int i = low + 1; i <= high; i++) {
        if(pivot > a[i]) {
            swap(&a[pivotPosition+1], &a[i]);
            swap(&a[pivotPosition], &a[pivotPosition+1]);
            pivotPosition++;
        }
    }
    return pivotPosition;
}
void quickSort(int a[], int low, int high) {
    if(low < high) {
        int part = partition(a, low, high);
        quickSort(a, low, part - 1);
        quickSort(a, part + 1, high);
    }
}
int main() {
    int arr[] = {7,9,7,3,2,5,4,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    cout<<"Array: ";
    for(int x:arr)cout<<x<<" ";
}