// Submission link:- https://leetcode.com/problems/three-divisors/

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    bool isThree(int n) {
        int x = sqrt(n);

        if (x * x != n) {
            return false;
        }

        if (isPrime(x)) {
            return true;
        }

        return false;
    }
};
