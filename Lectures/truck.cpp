#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> v(3);
    int temp;
    int arr[]={1,5,10,3,3,4};
    int k=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            // cin>>v[i][j];
            // cin>>temp;
            v[i].push_back(arr[k]);
            k++;
        }
    }



    // // testing 
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<2; j++) {
    //         // cin>>v[i][j];
    //         // cin>>temp;
    //         cout<<v[i][j]<<"\n";
            
    //     }
    // }

    int a[3] = {0};
       for(int i=0; i<3; i++) {
        if(v[i][0] - v[i][1] > 0) {
            a[i] = 1;
        }
    }
    int Fuel=0, Dist=0; 
    // fuel
    int index, index1 = 3;
    for(int i=0; i<3; i++) {
        if(a[i] > 0) {
            index = i;
            for(int j=index; j<index1; j++) {

                if(v[i][0] == a[i]) {
                    continue;
                }
                Fuel += v[i][0];
                cout<<v[i][0]<<" ";
                if(j == index1-1) {
                    index = 0;
                    index1 = i;
                }
            }
        }
    }


    // cout<<"\n"<<Fuel;
    for(int x:arr)cout<<x<<" ";
    
// distance
    // for(int i=0; i<3; i++) {
    //     Dist += v[i][0];
    // }


    // cout<<v[0][0];
    return 0;
}