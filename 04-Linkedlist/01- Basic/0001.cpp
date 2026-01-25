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

Node* convertArr2LL(vector<int>&arr){
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i= 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
   }
   return head;
}

int main(){
  vector<int>arr = {2,4,6,8,10};
   Node* head = convertArr2LL(arr);
  cout<<head->next;
}