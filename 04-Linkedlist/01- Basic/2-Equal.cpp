// two linkedlist equal or not
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




//   Middle Element
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

   
//   Equal or not
bool checkEqual(Node* head1 , Node* head2){
        while(head1 && head2){
            if(head1->value!= head2->value){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return (head1==NULL && head2==NULL);

       }
 

// Rotate kth

    void rotateByK(Node* &head, int k){
      Node* temp = head;
      int n=1;
      while(temp->next){
        n++;
        temp=temp->next;
      }
      //temp is pointing to last node
      k = k% n;

      if(k==0){
        return;
      }
       // 1. make last node to head;
         temp->next = head;
          

         // 2. find (n-k)th node and make next node as new node
           temp = head;
         for(int i =0;i<(n-k);i++){
          temp = temp->next;
         }


         Node* newHead = temp->next; //(n-k+1)th node

         //3. make (n-k)th node point to null
           temp->next = NULL;

           head = newHead;

    }

     int getLength(Node* head){
      int n=0;
      Node* temp = head;
      while(temp){
        n++;
        temp=temp->next;
      }

      return n;

     }
   
     Node* moveKSteps(Node* head,int k){
      Node* ptr = head;
      while(k--){
        ptr= ptr->next;
      }
      return ptr;
     }

      
// intersection
   Node* getIntersectionNode(Node* head1,Node* head2){
     int l1 = getLength(head1);
     int l2 = getLength(head2);
     Node* ptr1;
     Node* ptr2;
     if(l1>l2){ // first linked list is longer
      int k = l1-l2;
      ptr1 = moveKSteps(head1,k);
      ptr2 = head2;

     }
     else{
      int k = l2-l1;
      ptr1 = head1;
      ptr2 = moveKSteps(head2,k);
     }
     
        while(ptr1 && ptr2){
          if(ptr1 == ptr2){
            return ptr1;

          }
          ptr1=ptr1->next;
          ptr2=ptr2->next;
        }

        return NULL;
   }
    


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
 Node* head1 = node1;
 traverse(head1);

 insertAtHead(head1,10);
 traverse(head1);

 insertAtEnd(head1,100);
 traverse(head1);

 insertAtK(head1,30,2);
 traverse(head1);

 cout<<middleElement(head1);

cout << endl;
 Node* head2 = node1;
 traverse(head2);

 insertAtHead(head2,10);
 traverse(head2);

 insertAtEnd(head2,100);
 traverse(head2);

 insertAtK(head2,30,2);
 traverse(head2);

 cout<<middleElement(head2)<<endl;


cout<<checkEqual(head1,head2)<<endl;


  traverse(head1);

rotateByK(head1,3);
traverse(head1);
 
cout<<endl;

head2->next->next = head1->next->next;
traverse(head2);

Node* intersectionNode = getIntersectionNode(head1,head2);
  if(intersectionNode){
    cout<<intersectionNode->value<<endl;
  }else{
    cout<<"NO intersection point";
  }



}