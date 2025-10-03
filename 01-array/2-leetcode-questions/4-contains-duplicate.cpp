// submission link - https://leetcode.com/problems/contains-duplicate/submissions/1789949744
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        for(int i=0; i<n; i++) {
            st.insert(nums[i]);
        }
        if(st.size() == n) return false;
        else return true;
    }
};

