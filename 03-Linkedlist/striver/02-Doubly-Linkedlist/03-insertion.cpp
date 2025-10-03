#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node* back;

      Node(int val){
        data=val;
        next=NULL;
        back=NULL;
      }
};

  Node* arr2LL(vector<int>arr){
      Node* head = new Node(arr[0]);
      Node* back = head;
      for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        temp->back=back;
        back->next = temp;
        back = temp;

      }
      return head;
  }

      // insertion before head.
       
      Node* insertBeforeHead(Node* &head,int val){
        Node* newNode = new Node(val);
        newNode->next=head;
        if(head!=NULL){
        head->back=newNode;
        }

        return newNode;
      }

      // insertion before tail.

      Node* insertBeforeTail(Node* head,int val){
    if(head->next == NULL){
        return insertBeforeTail(head,val);
    }

    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev = tail->back;
    Node* newNode = new Node(val);

    newNode->next=tail;
    newNode->back=prev;

    prev->next=newNode;
    tail->back=newNode;

     return head;
}

      // insert befor kth element.

      Node* insertBeforeKthElement(Node* head,int val,int k){
        if(k==1){
            return insertBeforeHead(head,val);
        }

        Node* temp = head;
        int cut =0;
        while(temp!=NULL){
            cut++;
            if(cut==k) break;
                temp = temp->next;

        }
           Node* prev = temp->back;
           Node* newNode = new Node(val);
         
          newNode->next=temp;
          newNode->back=prev;
           prev->next = newNode;
           temp->back = newNode;
           return head;

        }
      




  void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
  }

int main(){
    vector<int>arr={2,4,6,8,10};
    Node* head = arr2LL(arr);
    // cout<<head->data<<" "<<head->next<<" "<<head->back<<endl;
    cout<<"Nodes are :";
    printList(head);
    cout<<endl;
   head = insertBeforeHead(head,32);
    cout<<"Nodes inserted before head :";
    printList(head);
    cout<<endl;

    head = insertBeforeTail(head,26);
    cout<<"Nodes after insertion before tail : ";
    printList(head);

    cout<<endl;
    head = insertBeforeKthElement(head,100,3);
    cout<<"Nodes after insertion at kth position :";
    printList(head);
    


}