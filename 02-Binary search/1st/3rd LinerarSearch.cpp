#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&arr,int target){
    for(int i=0;i<=arr.size();i++){
        if(target == arr[i]){
       cout<<"Element is present";
        }
    }
}
int main(){
    vector<int>arr={3,5,6,7,8,9};
    int tar = 5;
    linearSearch(arr,tar);
    return 0;
}
