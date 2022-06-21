#include <bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s){
    vector<string> ans;
    int n = pow(2, s.length());
    for(int i = 1; i < n; ++i){
        int x = i, j = 0;
        string str = "";
        while(x){
            if(x&1)
                str += s[j];
            j++;
            x = x>>1;
        }
        ans.push_back(str);
    }
    sort(ans.begin(), ans.end());
    return ans;
}