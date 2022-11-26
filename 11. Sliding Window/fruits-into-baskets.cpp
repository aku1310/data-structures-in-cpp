#include <bits/stdc++.h>
using namespace std;

int totalFruit(vector<int> &fruits)
{
    unordered_map<int, int> m;
    int ans = 0, j = 0;

    for (int i = 0; i < fruits.size(); ++i)
    {
        m[fruits[i]]++;

        while (m.size() > 2 && j < i)
        {
            m[fruits[j]]--;

            if (m[fruits[j]] == 0)
                m.erase(fruits[j]);

            j++;
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}