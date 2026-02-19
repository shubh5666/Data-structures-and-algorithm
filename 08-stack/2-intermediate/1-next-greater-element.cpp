//Next Greater(largest) element/nearest greater element from right.

#include<bits/stdc++.h>

using namespace std;
int main(){
   vector<int>v={4,20,56,89,21};
   stack<int>st;
  vector<int>ans;

    for(int i = v.size()-1;i>=0;i--){
      if(st.size() == 0){
         ans.push_back(-1);
      }

       else if(st.size() > 0 && st.top() > v[i]){
         ans.push_back(st.top());
       }

       else if( st.size() > 0 && st.top() <= v[i]){
         while(st.size() > 0 && st.top() <= v[i]){
            st.pop();
         }
         if(st.size() ==0){
            ans.push_back(-1);
         }

         else{
            ans.push_back(st.top());
         }

       }

       st.push(v[i]);

    }
    reverse(ans.begin() , ans.end());

    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }

}