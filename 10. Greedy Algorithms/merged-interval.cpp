#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> sol;

    if (intervals.size() <= 1)
        return intervals;

    sort(intervals.begin(), intervals.end());

    sol.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        if (sol.back()[1] >= intervals[i][0])
            sol.back()[1] = max(sol.back()[1], intervals[i][1]);

        else
            sol.push_back(intervals[i]);
    }
    return sol;
}