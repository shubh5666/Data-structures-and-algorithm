//

#include<bits/stdc++.h>
using namespace std;

class Node{

 public:
int value;
Node* next;

Node(int v){
    value=v;
    next = NULL;

}

};

//Insertion at head
void Ihead(Node* &head,int val){
    Node* newNode = new Node(val);
      if(head == NULL){
        head = newNode;
        head->next = head;
        return;
      }  


    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}


//Insert at end

void tail(Node* &head , int val){
      
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        head->next = head;
        return;

    }

    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;

    }
    temp->next = newNode;
    newNode->next = head;
    


}


//Deletion from start
void deleteHead(Node* &head){


    Node* temp = head;
    if(head == NULL){
        return;
    }


    if(head->next == head){
        delete head;
        return;
    }


    Node* tail = head;
    while(tail->next!=head){
        tail=tail->next;

    }
    tail->next = head->next;
    head = head->next;
    delete temp;

}


// Deletion from end

void deleteEnd(Node* &head){
     if(head == NULL){
        return;
    }


    if(head->next == head){
        delete head;
        return;
    }

    Node* temp = head;
    while(temp->next->next!=head){
        temp = temp->next;
    }

    Node* last = temp->next;
    temp->next = head;
    delete last;

}

// split the linkedlist in two half and if ther is odd no. then put 1 extra in first half

 void split(Node* head){

    if(head->next==head){
        head1=head;
        return;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast->next!=head && fast->next->next!=head){
        slow = slow->next;
        fast = fast->next;
    }

    // placin the new head pointer
    head1 = head;
    head2 = slow->next;

// In case of even nodes, we will move the fast pointer to last node

if(fast->next->next == head){
    fast = fast->next;
}

 }




void traversal(Node* head){
    Node* temp = head;
    do{
        cout<<temp->value<<"->";
        temp = temp->next;
    } while(temp!=head);
     cout<<endl;
}

 void teaversalInLoop(Node* head){
    Node* temp = head;
    int k =10;
    while(k--){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<endl;
 }


int main(){

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1->next = n2;
    n2->next = n1;
    Node* head = n1;
    traversal(head);

    teaversalInLoop(head);

    Ihead(head,24);
     traversal(head);

     tail(head,54);
     traversal(head);

    // deleteHead(head);
    // traversal(head);

    // deleteEnd(head);
    // traversal(head);







}