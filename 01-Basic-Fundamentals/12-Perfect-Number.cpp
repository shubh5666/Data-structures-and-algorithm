// submission link:- https://leetcode.com/problems/perfect-number/description/?source=submission-ac

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }

        int sum = 1;
        int i = 2;

        while (i * i <= num) {
            if (num % i == 0) {
                sum = sum + i;

                if (i != num / i) {
                    sum = sum + (num / i);
                }
            }
            i = i + 1;
        }

        if (sum == num) {
            return true;
        } else {
            return false;
        }
    }
};
