// submission link:- https://leetcode.com/problems/reverse-integer/submissions/1870384633/

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int i = 0,j = s.size()-1;

        if(s[0] == '-'){
            i = 1;
        }

        while(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
       
   long long val = stoll(s);
     if(val > INT_MAX || val < INT_MIN)
     return 0;
         return (int)val;

    }
};