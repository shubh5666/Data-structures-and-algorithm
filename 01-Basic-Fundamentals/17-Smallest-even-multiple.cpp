// Submission link:- https://leetcode.com/problems/smallest-even-multiple/submissions/1885849283/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        } else {
            return n * 2;
        }
    }
};