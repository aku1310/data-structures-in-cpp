#include <bits/stdc++.h>
using namespace std;

int findPosition(int n) {
    if(n == 0)
        return -1;
    if((n&(n - 1)) == 0){
        int count = 0;
        while(n){
            count++;
            n = n>>1;
        }
        return count;
    }
    return -1;
}