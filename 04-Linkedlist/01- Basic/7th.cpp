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
    Linkedlist(){
        head=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    void pop_back(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void insert(int val,int pos){
       if(pos<0){
        cout<<"Invalid pos";
        return;
       }
       if(pos==0){
        push_front(val);
        return;
       }
       Node* temp = head;
       for(int i=0;i<pos-1;i++){
        temp=temp->next;
       }
       Node* newNode = new Node(val);
       newNode->next=temp->next;
       temp->next=newNode;
    }
    int search(int key){
       Node* temp = head;
        int idx = 0;
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
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null"<<endl;
    }
};
    int main(){
    Linkedlist l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.pop_back();
    l.insert(100,2);
    cout<<l.search(20)<<endl;
    l.display();
}