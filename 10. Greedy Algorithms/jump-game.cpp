#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int ind = nums[0] + 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ind = max(ind, i + 1 + nums[i]);
        if (ind >= nums.size())
            return true;
        if (ind == i + 1)
            return false;
    }
    return true;
}