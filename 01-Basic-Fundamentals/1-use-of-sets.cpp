#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int arr[] = {3,2,1,6,4,8,2,1,5,8,4,6,6,6,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

      // for printing uniques elements;

    // set<int>st;

    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }

    // for(int x : st){
    //     cout<<x<<" ";
    // }


    // for duplicate values

    // int freq[100]= {0}; // assuming frequency is <100
    //   for(int i=0;i<n;i++){
    //     freq[arr[i]]++;
    //     if(freq[arr[i]] == 2){
    //         cout<<arr[i]<<" ";
    //     }
    //   }
    //     return 0;


    
    // for unique elemet.
    vector<int>s;
    int freq[100] = {0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]] == 1){
            s.push_back(arr[i]);
        }
    }

    for(int x : s){
        cout<<x<<" ";
    }
}