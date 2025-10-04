   // search the target in a sorted array in increasing oreder of sorted array using Binary search.
 

#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target== arr[mid])
          return mid;
        else if(target<=arr[mid])
        end=mid-1;
        else{
           st = mid+1;
        }

    }
    return -1;
}

    int main(){
        vector<int>arr ={4,7,8,9,10};
        int target = 9;
        cout<<binarySearch(arr,target)<<endl;
    }
