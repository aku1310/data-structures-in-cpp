#include <bits/stdc++.h>
using namespace std;

int mx = -1;

void dfs(vector<int> &edges, vector<int> &prev, vector<int> &vis, int curr, int currIn)
{
    if (prev[curr])
    {
        mx = max(mx, currIn - prev[curr]);
        return;
    }

    if (!vis[curr])
    {
        prev[curr] = currIn;
        vis[curr] = 1;
        currIn++;
        if (edges[curr] != -1)
            dfs(edges, prev, vis, edges[curr], currIn);
    }
    prev[curr] = 0;
    return;
}
int longestCycle(vector<int> &edges)
{
    vector<int> vis(edges.size(), 0);
    vector<int> pvis(edges.size(), 0);
    mx = -1;
    for (int i = 0; i < edges.size(); ++i)
        if (!vis[i])
            dfs(edges, pvis, vis, i, 1);

    return mx;
}
