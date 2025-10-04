#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

      Node(int val){
        data=val;
        next= NULL;
      }
};

Node* Array2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* insertAtHead(Node*&head,int val){
    Node* temp = new Node(val);
    temp->next=head;
    return temp;
}


Node* insertAtTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
  
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertNodeKth(Node* head,int k,int val){
    if(head==NULL){  
     if(k==1){
     Node* temp = new Node(val);
     return temp;
     }
     
    }
    int cut = 0;
    Node* temp = head;
    while(temp!= NULL){
        cut++;
        if(cut == k-1){
            Node* x = new Node(val);
            x->next = temp->next;
            temp->next=x;
            break;

        }
        temp = temp->next;
    }
    return head;

}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
vector<int>arr={2,4,7,9,10,34};
Node* head = Array2LL(arr);
// cout<<head->data;
cout<<"Original list :";
printList(head);
cout<<endl;
 head= insertAtHead(head,100);
 cout<<"Node after insertion at Head : ";
 printList(head);
 cout<<endl;
 head=insertAtTail(head,500);
 cout<<"Node after insertion at Tail:";
 printList(head);
 cout<<endl;
 head = insertNodeKth(head,6,789);
 cout<<"Node after insertion at Kth :";
 printList(head);


}