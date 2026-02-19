#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v={2,3,4,4,4,5,6,7,8};
    int target = 4;
    int ans =-1;

    int start =0,end=v.size()-1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(target == v[mid]){
           ans = mid;
           start = mid+1;  // this is for last occurnce.
            // end = mid-1;  // will for first occurence      
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<ans;

}