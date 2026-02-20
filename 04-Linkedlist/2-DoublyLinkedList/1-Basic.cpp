#include<bits/stdc++.h>
using namespace std;

class Node{

     public: 
    int value;
    Node* next;
    Node* prev;

    Node(int v){
        value = v;
        next = NULL;
        prev= NULL;
    }


};



// Insertion at head
void insertAtHead(Node* &head, int val ){

    Node* newNode = new Node(val);
       if(head){
     newNode->next = head;
     head->prev = newNode;
     head = newNode;
}
 head = newNode;
   }


// Insertion at end
void insertAtEnd(Node* & head , int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next){
        temp= temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

}


//Insertion at kth
void insertAtK(Node* head, int position,int val){

    if(position == 1){
       Node* newNode = new Node(val);
       newNode->next = head;
       if(head!=NULL){
        head->prev = newNode;
       }

       head = newNode;
       return;

    }

    Node* newNode = new Node(val);
        Node* temp = head;
        int count = 1;
        while(count<(position-1)){
            temp = temp->next;
            count++;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

         if(temp->next!=NULL){
        temp->next->prev = newNode;
    }


    temp->next = newNode;

}    

//Dletion head

void deleteHead(Node* &head){
    if( head->next==NULL){
        delete head;
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;

    delete temp;
}


// Deltetion from end;
    void deleteTail(Node* &head){

        if(head == NULL){
            return;

        }

        if(head->next == NULL){
          
            delete head;
            head = NULL;
            return;
        }

        Node* secondlast = head;

        while(secondlast->next->next!=NULL){
            secondlast= secondlast->next;
        }

        Node* lastNode = secondlast->next;
        secondlast->next  = NULL;
        lastNode->prev = lastNode;
        delete lastNode;

    }



    // delete from kth 

    void deleteK(Node* & head, int position ){
        if(position==0){
            return;
        }
        if(position == 1){
            Node* temp = head;
            head = head->next;
            if(head!=NULL){
            head->prev = NULL;
            }
            delete temp;
            return;

        }
         
        Node* prev = head;
        int count = 1;

        while(count<(position-1)){
            prev = prev->next;
            count++;
        }

        Node* curr =  prev->next;
        prev->next = curr->next;

          if(curr->next != NULL){
            curr->next->prev = prev;
          }
        delete curr;
        return;

    }


    void reverse(Node* head){
        Node* curr = head;
        Node* temp = NULL;

        while(curr){
          temp = curr->prev;
          curr->prev = curr->next;
          curr->next = temp;
          curr = curr->prev;
        }

        if(temp!= NULL){
            head = temp->prev;
        }
    }









void forwardTraversal(Node* head){

    Node* temp = head;

    while(temp){
        cout<<temp->value<<"--";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

 void backwardTraversal(Node* head){

     Node* temp = head;
     while(temp->next){
        temp = temp->next;
     }

     while(temp){
        cout<<temp->value<<"--";
        temp = temp->prev;
     }
     cout<<"NULL"<<endl;
 }




int main(){

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1->next = n2;
    n2->prev = n1;
    Node* head = n1;

    forwardTraversal(head);
    backwardTraversal(head);

    insertAtHead(head,10);
    forwardTraversal(head);

    insertAtEnd(head,55);
     forwardTraversal(head);

    insertAtK(head,3,499);
    forwardTraversal(head);

    deleteHead(head);
    forwardTraversal(head);


     deleteTail(head);
     forwardTraversal(head);

     deleteK(head,2);
     forwardTraversal(head);



}
