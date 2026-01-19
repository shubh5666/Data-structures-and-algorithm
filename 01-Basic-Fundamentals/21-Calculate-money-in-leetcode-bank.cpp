// Submission link:- https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/


class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int weekStart = 1;
        int dayMoney = 1;

        for (int day = 1; day <= n; day++) {
            total = total + dayMoney;

            if (day % 7 == 0) {
                weekStart = weekStart + 1;
                dayMoney = weekStart;
            } else {
                dayMoney = dayMoney + 1;
            }
        }

        return total;
    }
};
