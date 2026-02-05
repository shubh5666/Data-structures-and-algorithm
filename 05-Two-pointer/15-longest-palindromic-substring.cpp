// Submission link:- https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            
            int left = i;
            int right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = left;
                }
                left--;
                right++;
            }

           
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > maxLen) {
                    maxLen = len;
                    start = left;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
