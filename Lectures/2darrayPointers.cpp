#include<iostream>
using namespace std;



int **create2d(int m, int n) {

    int** arr = new int*[m];
    for(int i=0; i<n; i++) {
        arr[i] = new int[5];
    }
    // cout<<sizeof(arr);
    
    return arr;
}

void read2d(int **p, int n, int m) {

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>p[i][j];
        }
    }
}

void printArr(int **p, int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

void deleteArr(int arr, int n, int m) {


    for(int i=0; i<n; i++) {
        delete arr[i];
    }
    delete arr;
}
int main() {


    int **a, **b, **c;
    int m,n;
    cin>>n>>m;
    a = create2d(n,m);
    // b = create2d(n,m);
    // c = create2d(n,m);
    read2d(a,n,m);
    printArr(a,n,m);
    deleteArr(a,n,m);

    return 0;
}