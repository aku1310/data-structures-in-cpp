#include <bits/stdc++.h>
using namespace std;

int setBits(int N) {
    int count = 0;
    while(N){
        int b = N&1;
        if(b == 1) 
            count++;
        N = N>>1;
    }
    return count;
}