#include<iostream>  //pushfront;
using namespace std;
class Node{
  public:
      int data;
       Node* next;

       Node(int val){
        data=val;
        next=NULL;
       }

};

   class Linkedlist{
      public:
      Node* head;
      Node* tail;

        Linkedlist(){
          head=tail=NULL;
        }

    void push_front(int val) {
      Node* newNode = new Node(val);
      if(head == NULL){
        head=tail=newNode;
        return;
      }
      newNode->next=head;
      head=newNode;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
            
        }
        tail->next=newNode;
        tail=newNode;


    }

    void display(){
      Node* temp =head;
      while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
      }
      cout<<"NULL"<<endl;
    }


   };


int main(){
  Linkedlist l;
  l.push_front(30);
  l.push_front(20);
  l.push_front(10);
  l.push_back(4);
  l.display();
}