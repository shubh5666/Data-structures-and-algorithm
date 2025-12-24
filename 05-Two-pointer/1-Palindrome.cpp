// submission link :- https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {

        string s = to_string(x);
        int i = 0,j = s.length()-1;
        while(i<j){

             if(s[i]!= s[j]){
             return false;
        }

        i = i+1;
        j = j-1;
        }
         return true;
    }
   
};