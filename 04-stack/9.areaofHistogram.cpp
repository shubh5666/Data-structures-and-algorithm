#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
  vector<int>v={4,5,2,10,8};
  stack<pair<int,int>>st;
  vector<int>ans1;
  // calculating right to left smaller
  for(int i=v.size()-1;i>=0;i--){
    if(st.size()==0){
        ans1.push_back(-1);
    }
    else if(st.size()>0 && st.top().first<v[i]){
        ans1.push_back(st.top().second);
    }
    else if(st.size()>0 && st.top().first>=v[i]){
        while(st.size()>0 && st.top().first>=v[i]){
            st.pop();
        }
        if(st.size()==0){
            ans1.push_back(-1);
        }
        else{
            ans1.push_back(st.top().second);
        }
    }
    st.push({v[i],i});
  }
  // printing ans1
   for(int i = ans1.size()-1;i>=0;i--){
      if(ans1[i]== -1){
        cout<<"0 ";
      }
      else{
        cout<<i - ans2[i]<<"  ";
      }
   }
    cout<<endl;
    // reset stack before calaculating ans2 
     while(!st.empty()) st.pop();
  // calculating left to right smaller
    vector<int>ans2;
  for(int i=0;i<=v.size()-1;i++){
    if(st.size()==0){
        ans2.push_back(-1);
    }
    else if(st.size()>0 && st.top().first<v[i]){
        ans2.push_back(st.top().second);
    }
    else if(st.size()>0 && st.top().first>=v[i]){
        while(st.size()>0 && st.top().first>=v[i]){
            st.pop();
        }
        if(st.size()==0){
            ans2.push_back(-1);
        }
        else{
            ans2.push_back(st.top().second);
        }
    }
    st.push({v[i],i});
  }
   // for printing
   for(int i=0;i<=ans2.size()-1;i++){
     if(ans2[i]==-1){
        cout<<"0 ";
     }
     else{
        cout<< i - ans2[i]<<"  ";
     }
   }

     cout<<endl;
   int maxArea = 0; 
  for(int i=0;i<=v.size()-1;i++){
    int width = ans2[i]-ans1[i]-1;
    int area = v[i]* width;
     if(area>maxArea){
        maxArea = area;
     }
  }
   cout<<maxArea<<endl;
   return 0;
}
   


  







