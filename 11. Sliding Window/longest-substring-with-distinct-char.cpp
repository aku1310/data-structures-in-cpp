#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int temp = 0, ans = 0, j = 0;
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); ++i)
    {
        m[s[i]]++;
        temp++;

        while (m[s[i]] > 1)
        {
            m[s[j++]]--;
            temp--;
        }
        ans = max(ans, temp);
    }
    return ans;
}