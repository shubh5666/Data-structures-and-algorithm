#include<bits/stdc++.h>
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

      // conversion of array to Node.
        Node* Array2LL(vector<int>&arr){
            Node* head =new Node(arr[0]);
            Node* mover = head;
            for(int i=1;i<arr.size();i++){
                Node* temp = new Node(arr[i]);
                mover->next=temp;
                mover = temp;
                // return head;
            } 
            return head;
        }

        // Delete head;
        Node* deleteHead(Node* &head){
            
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

         // delete tail;
        Node* deleteTail(Node* & head){
          if(head==NULL  || head->next==NULL){
            return head;
          }  

          Node* temp = head;
          while(temp->next->next!=NULL){
            temp = temp->next;
          }
          delete temp->next;
          temp->next = nullptr;
          return head;
        }


        // delete Kth Node.
        Node* deleteKnode(Node* head,int k){
            if(head == NULL) return head;

            if(k ==1){
                Node* temp = head;
                head = head->next;
                delete temp;
                return head;
            }

             int cnt = 0;
                Node* temp = head;
                Node* prev = NULL;
                while(temp!=NULL){
                    cnt++;
                    if(cnt==k){
                    prev->next = prev->next->next;
                    delete temp;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
            return head;
        }


         // delete the value from Node.
           Node* deletionByValue(Node* head,int value){
            if(head== NULL) return head;

            if(head->data== value){
                Node* temp = head;
                head = head->next;
                delete temp;
                return head;
            }

               Node* temp = head;
               Node* prev = NULL;
               while(temp!=NULL){
                   if( temp->data == value){
                    prev->next= prev->next->next;
                    delete temp;
                    break;
                   }
                   prev = temp;
                   temp= temp->next;
               }
               return head;
           }
        
        

        void printList(Node* head){
               Node* temp = head;
               while(temp!= NULL){
                cout<<temp->data<<"  ";
                temp = temp->next;
               }
            
        }
    

        int main(){
            vector<int>arr={2,4,6,8,10,12,14};
            Node* head = Array2LL(arr);
            cout<<head->data<<endl;
            cout<<"Normal Linkedlist :";
            printList(head);
            deleteHead(head);
            cout<<endl;
            cout<<"Node after Deletion of Head :";
             printList(head);
             deleteTail(head);
             cout<<endl;
             cout<<"Node after Deletion of Tail:";
             printList(head);
             deleteKnode(head,3);
             cout<<endl;
             cout<<"Node after deletion of Kth Node: ";
             printList(head);
            cout<<endl;
             deletionByValue(head,10);
             cout<<endl;
            cout<<"Node after deletion of a values :";
            printList(head);

        }
