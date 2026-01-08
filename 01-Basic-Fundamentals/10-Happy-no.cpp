// submission link:- https://leetcode.com/problems/happy-number/submissions/1878859361/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1) {
            if (seen.find(n) != seen.end())
                return false;

            seen.insert(n);

            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum = sum + digit * digit;
                n = n / 10;
            }
            n = sum;
        }
        return true;
    }
};
