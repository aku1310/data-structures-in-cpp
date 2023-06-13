#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int i = 0, j = 1;
    vector<int> ans(nums.size());

    for (auto n : nums)
    {
        if (n > 0)
        {
            ans[i] = n;
            i += 2;
        }

        else
        {
            ans[j] = n;
            j += 2;
        }
    }

    return ans;
}