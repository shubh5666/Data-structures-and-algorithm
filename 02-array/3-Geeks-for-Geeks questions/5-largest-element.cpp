// Submission link:- https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=2&sortBy=submissions

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
      
        int n = arr.size();
        int largest = arr[0];
        for(int i=0;i<n;i++){
            
              if(n == 1 ){
            return arr[0];
        }
            if(arr[i]>=largest){
                largest = arr[i];
            }
        }
        
        return largest;
    }
};
