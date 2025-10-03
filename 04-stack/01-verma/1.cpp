#include<iostream>
#include<stack>
using namespace std;   // stack follow LIFO(last in first out)
int main(){
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove
    st.pop();

    // check element on top
    cout<<"Element on the top :"<<st.top()<<endl;
   // size

   cout<<"Size of stack is :"<<st.size()<<endl;
   if(st.empty())
   cout<<"stack is empty "<<endl;
else
cout<<"stack is not empty "<<endl;
    
}