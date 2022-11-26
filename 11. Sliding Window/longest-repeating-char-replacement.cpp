#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k)
{
    unordered_map<char, int> m;
    int ans = 0, temp = 0;

    for (int i = 0; i < s.length(); ++i)
    {
        m[s[i]]++;

        temp = max(temp, m[s[i]]);

        if (ans - temp < k)
            ans++;

        else
            m[s[i - ans]]--;
    }
    return ans;
}