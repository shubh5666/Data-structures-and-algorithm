#include<iostream>
#include<vector>
using namespace std;
int binarySearch (vector<int> &arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
   
        if(target==arr[mid]){
            return mid;
       
        }
        else if(target>arr[mid]){
            st=mid+1;
            
        }
        else{
            end=mid-1;
           
        }
    }
    return -1;
}

int main(){
    vector<int>arr1={3,5,6,7,8,9,10};
    int tar1= 10;
   int result =  binarySearch(arr1,tar1);
   if(result==-1){
    cout<<"The element is not present";
   }
   else{
    cout<<"The element is  present";
   }
   
}