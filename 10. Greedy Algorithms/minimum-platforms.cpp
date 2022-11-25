#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    int ans = 1;
    sort(arr, arr + n);
    sort(dep, dep + n);

    int i = 0, j = 1;
    while (j < n)
    {
        if (dep[i] >= arr[j])
            ans++;

        else
            ++i;

        ++j;
    }

    return ans;
}