#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum = 0, check = 0;
    
    for(int i = 0; i < nums.size(); ++i)
        sum += nums[i];
    
    for(int i = 0; i < nums.size(); ++i){
        if(check == sum - check - nums[i])
            return i;
            
        else
            check += nums[i];
    }
    return -1;
}