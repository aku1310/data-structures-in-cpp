#include <iostream>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    int maxstart = INT_MIN, maxend = 0;
    for (int i = 0; i < n; ++i)
    {
        maxend += arr[i];

        if (maxend > maxstart)
            maxstart = maxend;

        if (maxend < 0)
            maxend = 0;
    }
    return maxstart;
}