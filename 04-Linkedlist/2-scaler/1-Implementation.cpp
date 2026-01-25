#include<iostream>
using namespace std;

class Node{
 public:
    int value;
    Node* next;

    Node(int v){

        value = v;
        next = NULL;

    }
};

// Insert at head;
  void inserAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }

// Insert in middle

void inserAtMiddle(Node* &head,int val,int position){

    if(position==1){
        inserAtHead(head,val);
        return;
    }

    Node* newNode = new Node(val);
    Node* prev = head;
    int count = 1;
    while(count<(position-1)){
        prev = prev->next;
        count++;
    }

    newNode->next = prev->next;
    prev->next = newNode;
}


  // Insert at tail;
  void inserAtTail(Node* &head,int val){

    if(head == NULL){
        inserAtHead(head,val);
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    // now temp is pointing to last node

    temp->next=newNode;

  }




  // DEletion from start
  void deleteAtStart(Node* &head){

    if(head == NULL){
        return;
    }

    Node* temp = head;
    head = head->next;
    free(temp);
  }



  // Deletion from end;

  void deleteAtEnd(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtStart(head);
        return;
    }
    Node* secondLastNode = head;
    while(secondLastNode->next->next!= NULL){
        secondLastNode = secondLastNode->next;
    }
    Node* lastNode = secondLastNode->next;
    secondLastNode->next = NULL;
    free(lastNode);
  }




  // Deletefrom Middle

  void deleteAtMiddle(Node* &head,int position){

    if(position == 1){
        deleteAtStart(head);
    }

    Node* prev = head;
    int count = 1;
    while(count<(position-1)){
        prev = prev->next;
        count++;
    }

    Node* curr = prev->next;
    prev->next = curr->next;
    free(curr);
  }


  //Updation

  void updateNodeValue(Node* &head , int k, int updatedValue){
    Node* temp = head;
    int count = 1;
    while(count<k){
        temp=temp->next;
        count++;
    }
    temp->value = updatedValue;
  }

  // TRaverseing in linkedlist
  void traverse(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->value<<"->";
        temp= temp->next;
    } cout<<"NULL"<<endl;
    

  }

int main(){

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    node1->next = node2;
    node2->next = node3;
    Node* head = node1;
    traverse(head);

     inserAtHead(head,10);
     traverse(head);

     inserAtTail(head,20);
     traverse(head);

     inserAtMiddle(head,50,3);
     traverse(head);

     deleteAtStart(head);
     traverse(head);

     deleteAtEnd(head);
     traverse(head);

     deleteAtMiddle(head,2);
     traverse(head);

    updateNodeValue(head,2,50);
    traverse(head);

// short way to print node value
    // cout<<node1->data<<"  "<<node2->data<<" "<<node3->data;

}