#include <bits/stdc++.h>
using namespace std;

vector<int> minPartition(int N)
{
    vector<int> notes = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    vector<int> ans;
    int i = 9;
    while (i >= 0)
    {
        if (N >= notes[i])
        {
            N -= notes[i];
            ans.push_back(notes[i]);
        }
        else
            --i;
    }
    return ans;
}