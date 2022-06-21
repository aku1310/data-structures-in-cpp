#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> v;
    queue<int> q;
    q.push(0);
    
    vector<int> visi(V,0);
    visi[0] = 1;
    
    while(!q.empty()){
        int element = q.front();
        q.pop();
        v.push_back(element);
        
        for(auto i: adj[element]){
            if(!visi[i]){
                visi[i] = 1;
                q.push(i);
            }
        }
    }
    return v;
}