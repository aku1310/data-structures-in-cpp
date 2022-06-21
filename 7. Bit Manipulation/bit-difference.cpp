#include <bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b){
    int xo = a^b;
    int count = 0;
    while(xo){
        if(xo&1)
            count++;
        xo = xo>>1;
    }
    return count;
}