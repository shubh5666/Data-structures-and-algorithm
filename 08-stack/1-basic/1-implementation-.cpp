#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
st.push(10);
st.push(12);
st.push(14);

while(!st.empty()){
    cout<<st.top()<<"  ";
   st.pop();
  
}

}