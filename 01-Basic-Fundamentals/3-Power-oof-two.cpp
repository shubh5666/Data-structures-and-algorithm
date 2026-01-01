// submission link:- https://leetcode.com/problems/power-of-two/submissions/1871056462/


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

        while(n!=1){

            if(n%2!= 0){
                return false;
            }
            
              n = n/2;
              
        }

        return true;
    }
};