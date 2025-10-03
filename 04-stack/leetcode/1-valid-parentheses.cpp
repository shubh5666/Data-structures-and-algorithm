submission link :- https://leetcode.com/problems/valid-parentheses/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] == '[' ){ //opening
                st.push(s[i]);
            }
            else{ //closing
                   if(st.size() == 0){
                    return false;
                   }

                   if(st.top() == '(' && s[i] == ')' ||
                   st.top() == '{' && s[i] == '}' ||
                   st.top() == '[' && s[i] == ']' ){
                    st.pop();
                   }
                   else{
                    return false;
                   }

            }
        }
             return st.size()== 0;
    }
};
