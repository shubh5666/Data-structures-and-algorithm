#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &arr, int target){
    int n = arr.size();
   int  l=0,h=n-1;
    while(l<=h){
int mid=l+(h-l)/2;
if(arr[mid]>target){
    h= mid-1;
}
else if(arr[mid]<target){
    l=mid+1;
}
else{
    return mid;
}

    }
    return -1;
    
    }

    int main(){
    vector<int>arr={3,5,6,7,8,9};
   int tar;
   cout<<"Enter the tar : ";
   cin>>tar;
   int result= binarySearch(arr,tar);
  if(result==-1){
    cout<<"Element is not present";
  }
  else{
    cout<<"Element is present";
  }

    }