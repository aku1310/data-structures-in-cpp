#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int ans = 0;
    
    vector<int> dp(n + 1, -1);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i <= n; ++i)
        dp[i] = dp[i - 1]+ dp[i - 2];
        
    ans = dp[n];
        
    return ans;
 
}