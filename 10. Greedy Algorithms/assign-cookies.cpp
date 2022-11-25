#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int i = 0, j = 0, ans = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    while (j < s.size() && i < g.size())
    {
        if (g[i] <= s[j])
        {
            ++ans;
            ++i;
        }
        ++j;
    }

    return ans;
}