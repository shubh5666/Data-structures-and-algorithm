// #include<iostream>   //pop front.
// using namespace std;
// class Node{
//   public:
//       int data;
//        Node* next;

//        Node(int val){
//         data=val;
//         next=NULL;
//        }

// };

//    class Linkedlist{
//       public:
//       Node* head;
//       Node* tail;

//         Linkedlist(){
//           head=tail=NULL;
//         }

//     void push_front(int val) {
//       Node* newNode = new Node(val);
//       if(head == NULL){
//         head=tail=newNode;
//         return;
//       }
//       newNode->next=head;
//       head=newNode;
//     }
//     void pop_front(){
//        if(head==NULL){
//         cout<<"Linkedlist is empty ";
//         return;
//        } 
//        Node* temp = head;
//        head = head->next;
//        temp->next = NULL;
//        delete temp;

//     }

//     void display(){
//       Node* temp =head;
//       while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//       }
//       cout<<"NULL"<<endl;
//     }


//    };


// int main(){
//   Linkedlist l;
//   l.push_front(30);
//   l.push_front(20);
//   l.push_front(10);
//   l.pop_front();
//   l.display();
// }

#include<iostream>
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
    void pop_front(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
     void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
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
    l.pop_front();
    l.display();

  }