// Submission link:- https://leetcode.com/problems/degree-of-an-array/submissions/1901032708/


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> start;
        unordered_map<int,int> end;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;

            if(start.find(nums[i]) == start.end()) {
                start[nums[i]] = i;
            }

            end[nums[i]] = i;
        }

        int degree = 0;
        for(auto it : freq) {
            if(it.second > degree) {
                degree = it.second;
            }
        }

        int ans = nums.size();
        for(auto it : freq) {
            if(it.second == degree) {
                int len = end[it.first] - start[it.first] + 1;
                if(len < ans) {
                    ans = len;
                }
            }
        }

        return ans;
    }
};
