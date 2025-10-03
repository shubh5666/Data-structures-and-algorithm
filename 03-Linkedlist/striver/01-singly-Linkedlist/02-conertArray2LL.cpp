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
 // created a full linkedlist by converting a array into linkedlist.
   Node* convertArray2LL(vector<int>&arr){
        Node* head = new Node(arr[0]);
       Node* mover= head;
        for(int i=1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
   }
  

   //deleted head Node of a Linkedlist.
   Node* deleteHead(Node* &head ){
    if(head==NULL) return head;
        Node* temp = head;
          head = head->next;
            delete temp;
            return head;
   }
   

   // deleted Tail Node of a Linkedlist.
   Node* deleteTail(Node* &head){
      if(head== NULL || head->next==NULL){
        return head;
      }

      Node* temp = head;
      while(temp->next->next!= NULL){
        temp = temp->next;
      }
      delete temp->next;
      temp->next = nullptr;
      return head;
   }


   // travering on a Linkedlist.
   void printList(Node* head){
    Node* temp = head;
     while(temp!= NULL){
        cout<<temp->data <<"  ";
        temp= temp->next;
     }
   }

    

int main(){
    vector<int>arr={2,4,6,8,20};
    Node* head = convertArray2LL(arr);
    // cout<<head->data<< " "<<head->next;
    cout<<"Original List : ";
    printList(head);
    // deleteHead(head);
      head = deleteHead(head);
      cout<<endl;
      cout<<"After deleting head :";
    printList(head);
    
    cout<<endl;
    head = deleteTail(head);
     cout<<"After deleting of tail :";
     printList(head);
}