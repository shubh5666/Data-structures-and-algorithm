// Submission link:- https://leetcode.com/problems/duplicate-zeros/submissions/1902156015/


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                zeros++;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            int newPos = i + zeros;
            if (newPos < n) {
                arr[newPos] = arr[i];
            }

            if (arr[i] == 0) {
                zeros--; 
                if (i + zeros < n) {
                    arr[i + zeros] = 0;
                }
            }
        }
    }
};
