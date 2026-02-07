// Submission link:- https://leetcode.com/problems/combination-sum/submissions/1911427848/

class Solution {
public:
    void helper(int i, vector<int>& a, int target,
                vector<int>& cur, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(cur);
            return;
        }

        if (i == a.size() || target < 0) return;
        cur.push_back(a[i]);
        helper(i, a, target - a[i], cur, ans);
        cur.pop_back();

        helper(i + 1, a, target, cur, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        helper(0, a, target, cur, ans);
        return ans;
    }
};
