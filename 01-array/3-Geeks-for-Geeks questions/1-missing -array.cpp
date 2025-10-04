// submission link:-https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays&difficulty=Easy&sortBy=submissions

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long  n = arr.size()+1;
        long long  sumOfAll = n*(n+1)/2;
        
        long long sum =0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
           
        }
        
         return  (int)(sumOfAll - sum);  
    }
    
};