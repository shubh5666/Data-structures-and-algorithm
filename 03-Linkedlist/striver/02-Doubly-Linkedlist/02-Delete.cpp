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

  Node* deleteHead(Node* &head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;

    delete temp;
    return head;
  }

  Node* deleteTail(Node* &head){
    if(head == NULL || head->next==NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next!=NULL){
       tail=tail->next;
    }
     Node* newTail = tail->back;
     newTail->next=nullptr;
     tail->back=nullptr;
     delete tail;
      return head;
  }

  // kth element deletion
      Node* deleteKthElement(Node* head,int k){
        if(head==NULL)
        return NULL;
    int cnt =0;
     Node* kNode = head;
     while(kNode!=NULL){
        cnt++;
        if(cnt==k)break;
        kNode = kNode->next;

     }
     Node* prev = kNode->back;
     Node* front = kNode->next;

     if(prev == NULL && front == NULL){
        return NULL;
     }
     else if(prev == NULL){
        return deleteHead(head);
     }
     else if(front == NULL){
        return deleteTail(head);
     }

      prev->next = front;
      front->back=prev;
      kNode->next = nullptr;
      kNode->back = nullptr;
      delete kNode;

     return head;
      }

      Node*  deleteNode(Node* temp){
        Node* prev = temp->back;
        Node* front = temp->next;

        if(front == NULL){
            prev->next=nullptr;
            temp->back=nullptr;
            delete temp;

        }

        prev->next=front;
        front->back=prev;

        temp->next = temp->back = nullptr;
        delete temp;
      }

      // insertion before head.
       
      Node* insertBeforeHead(Node* head,int val){
        Node* newNode = new Node(val);
        newNode->next=head;
        if(head!=NULL){
        head->back=newNode;
        }

        return newNode;
      }

      // insertion before tail.

      





  void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
  }

int main(){
    vector<int>arr={2,4,6,8,10,20,12,28};
    Node* head = arr2LL(arr);
    // cout<<head->data<<" "<<head->next<<" "<<head->back<<endl;
    cout<<"Nodes are :";
    printList(head);
    cout<<endl;
    deleteHead(head);
    cout<<"Nodes after deletion of Head are:";
    printList(head);
    cout<<endl;
    deleteTail(head);
    cout<<"Nodes after deletion of Tail: ";
    printList(head);
    cout<<endl;
    deleteKthElement(head,2);
    cout<<"Nodes after delation of kNode : ";
    printList(head);
    cout<<endl;
    
    deleteNode(head->next);
    cout<<"Nodes after deletion of a Nodes are :";
    printList(head);
    cout<<endl;
   head = insertBeforeHead(head,2);
    cout<<"Nodes inserted before head :";
    printList(head);
    


}