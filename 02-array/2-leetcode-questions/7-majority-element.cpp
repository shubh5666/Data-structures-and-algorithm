// submission link:- https://leetcode.com/problems/majority-element/submissions/1794238259/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size();
        
        if(n == 1) return nums[0];
        
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>n/2) return nums[i];
        }
        
        return -1;
    }
};