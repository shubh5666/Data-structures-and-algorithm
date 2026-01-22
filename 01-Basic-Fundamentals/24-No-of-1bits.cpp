// Submission link:- https://leetcode.com/problems/number-of-1-bits/submissions/1893560575/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                count = count + 1;
            }
            n = n / 2;
        }

        return count;
    }
};
