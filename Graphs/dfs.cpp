#include <bits/stdc++.h> 
using namespace std; 
#define endl "\n";
const int MAX = 1e6+3;
vector<int> g[MAX];
bool vis[MAX];


void dfs(int u)
{       
        vis[u] = 1;
        cout << u << endl;
        for(auto v: g[u])
        {
                if(vis[v])continue;
                dfs(v);
        }
}

int main() 
{ 
        freopen("in.txt", "r", stdin); freopen("o.txt", "w", stdout); 
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


        int vertices, edges, src, dest;
        cin >> vertices >> edges;

        while(edges--) 
        {
                cin >> src >> dest;
                g[src].push_back(dest);
                g[dest].push_back(src);
        }

        dfs(2);

        if(vis[3]) 
        {
                cout << "Yay" << endl;
        } 
        else cout << "NAY" << endl;
        
        return 0;
}


