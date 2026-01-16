// Submission link:- https://leetcode.com/problems/number-complement/submissions/1886790222/

class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int mask = 0;

        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp = temp / 2;
        }

        int result = num ^ mask;
        return result;
    }
};