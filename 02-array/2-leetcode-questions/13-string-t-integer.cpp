// Submission link:- https://leetcode.com/problems/string-to-integer-atoi/submissions/1913652125/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        long long num = 0;
        int sign = 1;

        while (i < n && s[i] == ' ') {
            i = i + 1;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i = i + 1;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            if (sign * num > 2147483647)
                return 2147483647;
            if (sign * num < -2147483648)
                return -2147483648;

            i = i + 1;
        }

        return sign * num;
    }
};
