#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        
    int maxi = prices[0], min = prices[0], ans = 0;
    
    for(int i = 0; i < prices.size(); ++i){            
        if(min > prices[i]){
            ans = max(ans, maxi - min);
            min = prices[i];
            maxi = prices[i];
        }
        
        else 
            maxi = max(maxi, prices[i]);
    }
    return max(ans, maxi - min);
        
}