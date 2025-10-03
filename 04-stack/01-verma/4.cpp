// Next greater element or greater element from right

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>v={10,34,56,12,78,};
    stack<int>st;
    vector<int>ans;

    for(int i= v.size()-1;i>=0;i--){
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top()>=v[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()<=v[i]){
            while(st.size()>0 && st.top()<=v[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
        }
        st.push(v[i]);
    }
     for(int i = ans.size()-1;i>=0;--i){
    cout<<ans[i]<<" ";
   }
}

  

 