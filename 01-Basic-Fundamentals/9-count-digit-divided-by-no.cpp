// submission link:- https://leetcode.com/problems/count-the-digits-that-divide-a-number/submissions/1877618664/

class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int count = 0;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit != 0) {
                if (num % digit == 0) {
                    count = count + 1;
                }
            }

            temp = temp / 10;
        }

        return count;
    }
};
