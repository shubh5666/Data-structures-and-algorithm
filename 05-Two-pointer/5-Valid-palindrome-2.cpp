// Submission link:- https://leetcode.com/problems/valid-palindrome-ii/submissions/1864887929/

class Solution {
public:
       
          bool check(string &s,int i,int j){
            while(i<j){
            if(s[i]!= s[j]){
                return false;

            }
                i++;
                j--;
            }
            return true;
          }


    bool validPalindrome(string s) {
        int i=0,j= s.length()-1;
        while(i<j){
            if(s[i]!= s[j]){
                return check(s,i+1,j) || check(s,i,j-1);
            }
            i++;
            j--;
        }

        return true;
    }
};