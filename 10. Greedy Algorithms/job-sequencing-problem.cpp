#include <bits/stdc++.h>
using namespace std;

struct Job 
{ 
    int id;	
    int dead; 
    int profit; 
};

static bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}

vector<int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comp);
    bool done[n] = {0};

    int d = 0, p = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = min(n, arr[i].dead - 1); j >= 0; --j)
        {
            if (done[j] == false)
            {
                ++d;
                p += arr[i].profit;
                done[j] = true;
                ;
                break;
            }
        }
    }
    return {d, p};
}