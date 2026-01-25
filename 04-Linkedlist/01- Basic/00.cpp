#include<bits/stdc++.h>
using namespace std;
  class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

  };

  int main(){
    vector<int>arr = {2,4,6,8,23};
    Node* y = new Node(arr[3]);
    cout<<y->next;
  }