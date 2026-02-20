// Submission link:- https://leetcode.com/problems/length-of-last-word/submissions/1925680793/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size();
        int len = 0;
        
        int i = n - 1;
        
        while(i >= 0 && s[i] == ' ') {
            i--;
        }
        
        while(i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }
        
        return len;
    }
};