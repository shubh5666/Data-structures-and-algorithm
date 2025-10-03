//Next Greater(largest) element/nearest greater element from right.

#include<bits/stdc++.h>

using namespace std;
int main(){
   vector<int>v={4,20,56,89,21};
   stack<int>st;
   vector<int>ans; // empty vector created to store the next greater element of each veactor(v).
   for(int i = v.size()-1;i>=0;i--){
      if(st.size()==0){
         ans.push_back(-1);
      }
      else if(st.size()>0 && st.top()>=v[i]){
//check stack is not empty and stack is greater than or equal to current element.
           ans.push_back(st.top());

      }
      else if(st.size()>0 && st.top()<=v[i]){
         while(st.size()>0 && st.top()<=v[i]){
            st.pop();
//if the stack's top element is smaller than or equal to the current element, 
//we pop elements from the stack until we find a greater element.
         }
         if(st.size()==0){
            ans.push_back(-1);
         }
         else{
            ans.push_back(st.top());
         }
      }
        st.push(v[i]);
// push the current element on the stack for future comparison.
   }

   for(int i=ans.size()-1;i>=0;i--){
      cout<<ans[i]<<" ";
   }
   cout<<endl;
 
}



