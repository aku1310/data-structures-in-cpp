#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &nums, int k){
    int ans = 0, temp = 0, j = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (!nums[i])
            ++temp;

        while (temp > k)
        {
            if (!nums[j])
                --temp;
            ++j;
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}