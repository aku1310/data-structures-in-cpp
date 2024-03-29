#include <bits/stdc++.h>
using namespace std;

// Top - Down Approach
bool isSubsetSum(vector<int> arr, int sum)
{

    int n = arr.size();
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int j = 1; j <= sum; j++)
        dp[0][j] = false;

    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < sum + 1; ++j)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = max(dp[i - 1][j - arr[i - 1]], dp[i - 1][j]);

            else
                dp[i][j] = dp[i - 1][j];
        }

    return dp[n][sum];
}