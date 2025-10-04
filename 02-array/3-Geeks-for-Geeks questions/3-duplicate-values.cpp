// submission link :- https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&sortBy=submissions


class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
       vector<int>freq(arr.size()+1,0);
       vector<int>ans;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
            
            if(freq[arr[i]] == 2){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};