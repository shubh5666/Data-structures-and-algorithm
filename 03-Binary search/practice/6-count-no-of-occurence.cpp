#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v={2,3,4,4,4,5,6,7,8};
    int target = 4;
    int ans =-1, ans2 = -1;

      // this is for last occurnce.


    int start =0, end=v.size()-1;

    while(start<=end){

        int mid = start + (end-start)/2;

        if(target == v[mid]){
           ans = mid;
           end = mid-1;  
            
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }


     // last occurence
     start =0;
     end=v.size()-1;

      
    while(start<=end){

        int mid = start + (end-start)/2;

        if(target == v[mid]){
           ans2 = mid;
           start = mid+1;      
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }
   


    if(ans == -1){
        cout<<"Element not found";
    }
    else{
    cout<<"count of occurence :  "<<ans2-ans+1;
    }

}


