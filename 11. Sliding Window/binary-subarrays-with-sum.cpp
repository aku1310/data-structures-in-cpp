#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &nums, int goal)
{
    int ans = 0, temp = 0, j = 0;

    if (goal < 0)
        return 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        temp += nums[i];

        while (temp > goal)
        {
            temp -= nums[j];
            ++j;
        }

        ans += i - j + 1;
    }
    return ans;
}

int numSubarraysWithSum(vector<int> &nums, int goal)
{
    return fun(nums, goal) - fun(nums, goal - 1);
}