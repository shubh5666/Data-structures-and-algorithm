// submission link:-https://leetcode.com/problems/power-of-three/submissions/1872007378/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n>1){
             if(n%3!= 0){
                return false;
                
             }
             n = n/3;
        }
        return true;
    }
};