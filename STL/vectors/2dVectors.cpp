#include<iostream>
#include<vector>
using namespace std;


int main() {

    vector< vector<int> > grid(10);

    // To specify the number of columns, we can use this declaration.
    // vector< vector<int> > grid(10, vector<int>(5));

    for(int i=0; i<grid.size(); i++) {
        for(int j=0; j<i+1; j++) {
            grid[i].push_back(j+1);
        }
    }

    for(int i=0; i<grid.size(); i++) {
        for(int j=0; j<grid[i].size(); j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
    Output:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6
    1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9 10



*/