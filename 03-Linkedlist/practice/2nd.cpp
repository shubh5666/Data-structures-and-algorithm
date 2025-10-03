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
          head=NULL;
          tail=NULL;
        }

    void push_back(int val) {
      Node* newNode = new Node(val);
      if(head == NULL){
        head=tail=newNode;
        return;
      }
      tail->next=newNode;
      tail=newNode;
    }
     void pop_back(){
        if(head==NULL){
            return;
        }

    Node* temp = tail;
     while(temp->next!=tail){
        temp=temp->next;
     }
     temp->next = NULL;
     delete tail;
     tail=temp;
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
  l.push_back(10);
  l.push_back(20);
  l.push_back(30);
  l.pop_back();
  l.display();
}