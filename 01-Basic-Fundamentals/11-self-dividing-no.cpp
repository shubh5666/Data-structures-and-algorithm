// submission link:- https://leetcode.com/problems/self-dividing-numbers/submissions/1879911937/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for (int num = left; num <= right; num = num + 1) {
            int temp = num;
            bool isValid = true;

            while (temp > 0) {
                int digit = temp % 10;

                if (digit == 0 || num % digit != 0) {
                    isValid = false;
                    break;
                }

                temp = temp / 10;
            }

            if (isValid == true) {
                result.push_back(num);
            }
        }

        return result;
    }
};
