#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

      Node(int val){
        data=val;
        next=NULL;
        back=NULL;
      }
};

Node* array2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* back = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        temp->back=back;
        back->next=temp;
        back=temp;
    }
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

int main(){
    vector<int>arr={2,4,6,8,10};
    Node* head = array2LL(arr);
    cout<<head->next;
    cout<<endl;
    printList(head);

}