#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        
    for(int i = 1; i < nums.size(); ++i){
        if(nums[i] == nums[i - 1]){
            nums.erase(nums.begin() + i - 1);
            i--;
        }
    }
    return nums.size();
}