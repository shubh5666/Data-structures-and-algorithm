#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

      Node(int val){
        data=val;
        next = NULL;

      }

};

Node* convertArray2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

//length of linkedlist
int  lengthOfNode(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    return count; 
}

//check;
int ChectLinkedlist(Node* head,int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val) return 1;
        temp = temp->next;
    }
    return 0;
}

// traverse

 void printList(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
 }

int main(){
    vector<int>arr={2,4,6,8,10};
    Node* head = convertArray2LL(arr);
    cout<<head->data;
    cout<<endl;
    cout<<"After traversing on linkedlist :";
    printList(head);
   
   int len =  lengthOfNode(head);
    cout<<endl;
    cout<<"Length of the Linkedlist :";
    cout<<len;

    int x = ChectLinkedlist(head,3);
    cout<<endl;
    cout<<"Check value present or not in Linkedlist :"<<x;



}