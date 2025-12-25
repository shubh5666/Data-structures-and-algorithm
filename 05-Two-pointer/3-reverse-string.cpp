// submission link :- https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0 ,j = s.size()-1;
        while(i<j){
           char temp = s[i];
           s[i] = s[j];
           s[j] = temp;
           
           i = i+1;
           j = j-1;
        }
      
    }
};