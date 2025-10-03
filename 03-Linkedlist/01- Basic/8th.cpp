#include<iostream>
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
    void push_back(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail = newNode;
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }
    // void insert(int val,int pos){
    //     if(pos<0){
    //         cout<<"invalid position";
    //         return;
    //     }
    //     if(head==0){
    //         pop_back(val);
    //         return;
    //     }
    //     Node * temp = head;
    //     for(int i=0;i<pos-1;i++){
    //         temp=temp->next;
    //     }
    //     Node* newNode = new Node(val);
    //     newNode->next=temp->next;
    //     temp->next=newNode;
    // }
    int search(int key){
      Node* temp = head;
      int idx=0;
      while(temp!=NULL){
        if(temp->data==key){
           return idx; 
        }
        temp=temp->next;
        idx++;
      }
      return -1;
    }
    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null"<<endl;
    }
 };
 int main(){
    Linkedlist l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.pop_back();
    cout<<l.search(100)<<endl;
    l.display();
 }