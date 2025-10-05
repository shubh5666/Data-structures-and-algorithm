// submission link :- https://leetcode.com/problems/jump-game-ii/description/

class Solution {
public:
    int jump(vector<int>& nums) {
         int n = nums.size();
        if(n<=1) return 0;
          if(nums[0] == 0) return -1;
           int st =1, x = nums[0], steps = nums[0];
        for(int i = 1;i<n;i++){
            
            if(i ==  n-1) return st;
            
            x = max(x , i + nums[i]);
            steps --;
            
            if(steps == 0){
                st++;
                
                if(i>= x) return -1;
                steps = x-i;
            }
            
            
            
        }
        
        return -1;
    }
};
