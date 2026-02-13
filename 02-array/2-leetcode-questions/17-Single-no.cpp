// Submission link:- https://leetcode.com/problems/single-number/submissions/1918013033/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
         
         int x = 0;
         for(int i = 0;i<nums.size();i++){
            x = x^nums[i];
         }
         return x;
    }
};