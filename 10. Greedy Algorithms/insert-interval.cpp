#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    vector<vector<int>> sol;
    int n = intervals.size(), i = 0;

    while (i < n && intervals[i][1] < newInterval[0])
    {
        sol.push_back(intervals[i]);
        i++;
    }

    while (i < n && newInterval[1] >= intervals[i][0])
    {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }

    sol.push_back(newInterval);
    while (i < n)
    {
        sol.push_back(intervals[i]);
        i++;
    }

    return sol;
}