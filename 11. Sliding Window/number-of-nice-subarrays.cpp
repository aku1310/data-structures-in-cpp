#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int> &nums, int k)
{
    int ans = 0, temp = 0, j = 0, count = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] & 1)
        {
            temp++;
            if (temp >= k)
            {
                count = 1;
                while (!(nums[j++] & 1))
                    count++;
                ans += count;
            }
        }
        else if (temp >= k)
            ans += count;
    }
    return ans;
}

// ALTERNATE SOLUTION

// int fun(vector<int> &nums, int k)
// {
//     int ans = 0, j = 0, temp = 0;

//     for (int i = 0; i < nums.size(); ++i)
//     {
//         temp += nums[i]%2;

//         while (k < temp)
//         {
//             temp -= nums[j]%2;
//             ++j;
//         }

//         ans += i - j + 1;
//     }
//     return ans;
// }
    

// int numberOfSubarrays(vector<int> &nums, int k)
// {
//     return fun(nums, k) - fun(nums, k - 1);
// }