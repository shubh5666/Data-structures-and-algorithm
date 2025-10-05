// submission link:- https://leetcode.com/problems/find-common-elements-between-two-arrays/

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                
                }
            }
        }
        return ans;
    }
};







// for practice in vs code

// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={2,3,4,56,6,};
// int arr1[4]={2,6,23,4};
// for(int i=0;i<5;i++){
//     for(int j=0;j<4;j++){
//         if(arr[i]==arr1[j]){
//          cout<<arr[i]<<" ";
//          arr[i]=-1;
//          break;
//         }
//     }
// }



// cout<<endl;
// }


