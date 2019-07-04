#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {

    int arr[] = {32,45,346,7,6,3,432,43,65,867,9,53,124,23,534,6};

    int sum = 0, req = 1161;

    for(int i=0; i<sizeof(arr)-1; i++) {

        sum = arr[i];
        for(int j=i+1; j<sizeof(arr); j++) {

            sum += arr[j];

            if(sum == req) {
                cout << "subset ";
                for(int k = i; k<=j;k++)cout<<arr[k] << " ";
                break;
        }
    }

    }
    cout << endl;
return 0;
}