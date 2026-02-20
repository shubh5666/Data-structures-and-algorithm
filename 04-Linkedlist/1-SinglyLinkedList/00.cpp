#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int value;
  Node*  next;

  Node(int v){
    value = v;
    next = NULL;
  }

};

// Insert At head
  void insertAtHead(Node* &head , int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }


  // Insert At end
    void insertAtEnd(Node* &head , int val){
      if(head == NULL){
        insertAtHead(head,val);
        return;
      }
      Node* newNode = new Node(val);
      Node* temp = head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next = newNode;



    }
  
    // Insert at kth position
      void insertAtK(Node* &head,int val,int position){
        if(position == 1){
          insertAtHead(head,val);
        }
        Node*  newNode = new Node(val);
        Node*  prev = head;
        int count = 1;
        while(count<(position-1)){
          prev = prev->next;
          count++;
        }

        newNode->next = prev->next;
        prev->next = newNode;

      }


      // Deletion at head
      void deleteAtHead(Node* &head){
        if(head==NULL)
        return;
        Node*  temp = head;
          head = head->next;
           delete (temp);
      }

      //Delete  tail
      void deleteTail(Node* &head){
        if(head == NULL){
          return;
        }

        if(head->next==NULL){
          deleteAtHead(head);
          return;

        }
        Node* secondLastNode = head;
        while(secondLastNode->next->next!=NULL){
          secondLastNode = secondLastNode->next;
        }
        Node*  lastNode = secondLastNode->next;
        secondLastNode->next = NULL;
        delete (lastNode);
      }


      //Delete at kth position

      void deleteAtK(Node* &head,int position){
        if(position = 0){
          return;
        }
        if(position==1){
          deleteAtHead(head);
          return;
        }
        Node* prev = head;
        int count = 1;
        while(count<(position-1)){
          prev = prev->next;
          count++;
        }
          
        // prev is pointing to node at position-1

        Node* curr = prev->next;
        prev->next = curr->next;
        delete (curr);

      }



      //Updation on kth
       void updateValue(Node* &head,int k , int updatedvalue){

          Node* temp = head;
          int count = 1;
          while(count<k){
            temp=temp->next;
            count++;
          }
           
          temp->value = updatedvalue;

       }



       // DeleteAt every Alternative

       void deleteAlternate(Node* &head){
        if(head==NULL){
          return;
        }

        Node* temp = head;
        while(temp!=NULL && temp->next!=NULL){
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
         temp = temp->next;
         
        }
     
       }
  


       // Middle Element
       int middleElement(Node* &head){
        Node* slow = head;
        Node* fast = head;

        while(fast!=NULL && fast->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;
        }
        //slow at middle element
        return slow->value;
       }

   
       // 

      

    


  void traverse(Node* head){
    Node*  temp = head;
    while(temp!=NULL){
      cout<<temp->value<<"->";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
  }

int main(){

 Node* node1 = new Node(1);
 Node*  node2 = new Node(2);
 node1->next = node2;
 Node* head = node1;
 traverse(head);

 insertAtHead(head,10);
 traverse(head);

 insertAtEnd(head,100);
 traverse(head);

 insertAtK(head,30,2);
 traverse(head);

 deleteAtHead(head);
 traverse(head);

 deleteTail(head);
 traverse(head);

 deleteAtK(head , 2);
 traverse(head);

updateValue(head,1,50);
traverse(head);

  insertAtHead(head,10);
 traverse(head);

 insertAtEnd(head,100);
 traverse(head);

 insertAtK(head,30,2);
 traverse(head);


 deleteAlternate(head);
 traverse(head);

 cout<<middleElement(head);
 



}