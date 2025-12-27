// submission link :- https://leetcode.com/problems/sqrtx/submissions/1866728182/

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)  return x;
        int i = 1;
        while(i <= x/i){
            i++;
        }
        return i-1;
    }
};