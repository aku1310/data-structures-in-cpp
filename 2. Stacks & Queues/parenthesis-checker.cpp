#include <bits/stdc++.h>
using namespace std;

bool ispar(string x){
    stack<char> st;
    
    for(int i = 0; i < x.length(); ++i){
        if(st.empty())
            st.push(x[i]);
        
        else if(st.top() == '(' && x[i] == ')')
            st.pop();
            
        else if(st.top() == '{' && x[i] == '}')
            st.pop();
            
        else if(st.top() == '[' && x[i] == ']')
            st.pop();
        
        else 
            st.push(x[i]);
    }
    return st.empty();
}