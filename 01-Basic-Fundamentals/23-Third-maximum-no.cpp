// Submission link:- https://leetcode.com/problems/third-maximum-number/submissions/1892438081/

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long first = -10000000000;
        long second = -10000000000;
        long third = -10000000000;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == first || nums[i] == second || nums[i] == third)
                continue;

            if(nums[i] > first) {
                third = second;
                second = first;
                first = nums[i];
            }
            else if(nums[i] > second) {
                third = second;
                second = nums[i];
            }
            else if(nums[i] > third) {
                third = nums[i];
            }
        }

        if(third == -10000000000)
            return first;

        return third;
    }
};
