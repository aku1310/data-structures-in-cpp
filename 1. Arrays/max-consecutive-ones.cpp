#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0, temp = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 0)
            temp = 0;

        temp = max(temp + nums[i], nums[i]);
        ans = max(ans, temp);
    }
    return ans;
}