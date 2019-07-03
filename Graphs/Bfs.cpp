#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



void bfs(int graph[][8], int n, int v) {

    queue<int> q;
    q.push(v);
    int visited[n] = {0};
    visited[v]=1;
    while(!q.empty()) {
        int val = q.front();
        q.pop();
                cout << val << " ";

        for(int i=0; i<n;i++) {
            if(graph[val][i] == 1) {
                if(!visited[i]) {
                visited[i] = 1;
                q.push(i);
            }
            }   
        }
    }
}


// arr = {12,2,32,42,35,43,543,6,436,2,4,124,5,234,6,213};
int main() {

int graph[8][8] = {
    {0, 1, 1, 1, 0, 0, 0, 0},
    {1, 0, 0, 0, 1, 1, 0, 0},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0, 0, 1},
    {0, 0, 1, 0, 0, 0, 0, 1},
    {0, 0, 0, 1, 1, 1, 1, 0}
};

bfs(graph, 8, 5);
return 0;
}