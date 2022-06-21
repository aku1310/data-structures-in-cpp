#include <bits/stdc++.h>
using namespace std;

vector<int> v;
      
void solve(int src, vector<int> &vis, vector<int> adj[]){
    vis[src] = 1;
    v.push_back(src);
    for(auto i:adj[src]){
        if(!vis[i]){
            solve(i, vis, adj);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    v.clear();
    vector<int> vis(V, 0);
    solve(0, vis, adj);
    return v;
}