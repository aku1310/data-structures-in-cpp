#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> st;
    vector<long long> v;
    st.push(-1);
    
    for(int i = n - 1; i >= 0; --i){
        while(arr[i] >= st.top() && st.size() > 1){
            st.pop();
        }
        
        v.push_back(st.top());
        st.push(arr[i]);
                
    }
    
    reverse(v.begin(), v.end());
    return v;
}