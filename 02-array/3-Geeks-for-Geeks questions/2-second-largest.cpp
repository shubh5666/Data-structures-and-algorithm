// submission link:-https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays&difficulty=Easy&sortBy=submissions

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                largest =arr[i];
            }
        }
        
        int second = -1 ;
            for(int i=0;i<arr.size();i++){
                if(arr[i]!=largest && arr[i]>second){
                     second = arr[i];
                }
            }
        
        
        return second;
        
    }
};