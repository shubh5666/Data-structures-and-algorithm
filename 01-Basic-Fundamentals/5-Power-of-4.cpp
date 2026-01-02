// submission link:- https://leetcode.com/problems/power-of-four/submissions/1872011495/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        while(n>1){
            if(n%4!=0){
                return false;
            }
            n = n/4;
        }
        return true;
    }
};