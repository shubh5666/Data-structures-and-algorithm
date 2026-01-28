// Submission link:- https://leetcode.com/problems/find-the-difference/submissions/1900236414/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a'] = freq[s[i] - 'a'] + 1;
        }

        for (int i = 0; i < t.length(); i++) {
            freq[t[i] - 'a'] = freq[t[i] - 'a'] - 1;
            if (freq[t[i] - 'a'] < 0) {
                return t[i];
            }
        }

        return 'a'; 
    }
};
