// Submission link:- https://leetcode.com/problems/roman-to-integer/submissions/1906892482/

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int curr = value(s[i]);
            int next = 0;

            if(i + 1 < n) {
                next = value(s[i + 1]);
            }

            if(curr < next) {
                ans = ans - curr;
            } else {
                ans = ans + curr;
            }
        }

        return ans;
    }

    int value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000; 
    }
};
