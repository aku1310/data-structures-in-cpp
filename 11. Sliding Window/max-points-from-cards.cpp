#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int ans = accumulate(cardPoints.begin(), cardPoints.begin() + k, 0);
    int temp = ans;
    
    for(int i = k - 1; i >= 0; --i){
        temp -= cardPoints[i];
        temp += cardPoints[cardPoints.size() - k + i];

        ans = max(ans, temp);
    }
    return ans;
}