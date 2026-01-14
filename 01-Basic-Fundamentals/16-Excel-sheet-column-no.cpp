// Submission link:- https://leetcode.com/problems/excel-sheet-column-number/submissions/1884851996/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;

        for (int i = 0; i < columnTitle.length(); i++) {
            int value = columnTitle[i] - 'A' + 1;
            result = result * 26 + value;
        }

        return result;
    }
};
