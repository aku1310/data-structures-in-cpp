#include <bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>> &intervals){
    int ans = 0, ans2 = 0;
    sort(intervals.begin(), intervals.end());

    int i = 0, j = 1;

    while (j < intervals.size()){
        if(intervals[i][1] <= intervals[j][0])
            i = j;

        else if (intervals[i][1] <= intervals[j][1])
            ++ans;

        else if (intervals[i][1] > intervals[j][1]){
            ++ans;
            i = j;
        }
        ++j;
    }
    return ans;
}