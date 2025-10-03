#include<bits/stdc++.h>    // simple creating a linkedlistnot full but only one Nodes
using namespace std;
 class Node{
       

      public:
      int data;
      Node* next;
       
         Node(int val){
            data=val;
            next = NULL;
         }
 };

  int main(){
    vector<int>arr = { 2,4,5,7,8,10};
    Node* y = new Node(arr[0]);
    cout<<y->data<<"  "<<y->next;
  }