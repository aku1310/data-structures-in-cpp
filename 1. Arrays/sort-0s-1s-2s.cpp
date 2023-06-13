#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int last = nums.size() - 1;

    for (int i = 0, j = 0, k = last; j <= k; ++j)
    {
        if (nums[j] == 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
        else if (nums[j] == 2)
        {
            swap(nums[j--], nums[k]);
            k--;
        }
    }
}