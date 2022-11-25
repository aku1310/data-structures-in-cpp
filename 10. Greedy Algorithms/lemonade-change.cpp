#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bills){
    int fives = 0, tens = 0;

    for (int i = 0; i < bills.size(); ++i){
        if (bills[i] == 5)
            ++fives;

        else if (bills[i] == 10){
            ++tens;
            --fives;
        }

        else if (bills[i] == 20){
            if (tens)
            {
                --tens;
                --fives;
            }
            else
                fives -= 3;
        }

        if (fives < 0)
            return false;
    }

    return true;
}