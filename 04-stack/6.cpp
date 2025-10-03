// nearest smaller to left or next smaller to left
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){

    vector<int>v={3,5,4,78,900,100};
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<=v.size()-1;i++){
        if(st.size()==0){
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top()<v[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0 && st.top()>=v[i]){
            while(st.size()>0 && st.top()>=v[i]){
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
    for(int i=0;i<=ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }

}