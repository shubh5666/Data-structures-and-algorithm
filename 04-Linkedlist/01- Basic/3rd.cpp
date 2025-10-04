// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
      
//       Node(int val){
//         data=val;
//         next=NULL;
//       }
// };

//  class Linkedlist{
//     Node* tail;
//     Node* head;
     
//      public: 
//       Linkedlist(){
//        head= tail=NULL;

//       }

//       void push_back(int val){
//         Node* newNode=new Node(val);
//         if(tail==NULL){
//            head= tail=newNode;
//             return;
//         }
//         tail->next=newNode;
//         tail=newNode;
//       }

//  void display(){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;

//     }
//     cout<<"NULL"<<endl;
//     }
//  };
  
//    int main(){
//     Linkedlist l;
//     l.push_back(4);
//     l.push_back(8);
//     l.push_back(16);
//     l.push_back(32);
//     l.display();
//    }


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
        
        head=NULL;
        tail=NULL;
       }

      //  void push_front(int val)
      void push_back(int val)
      {
         Node* newNode = new Node(val);
         if(tail==NULL){
          head=tail = newNode;
          return;
         }
        //  newNode->next = head;
        //  head = newNode;
         tail->next=newNode;
         tail=newNode;
       }

       void display(){
        Node* temp = head;
        while(temp!=NULL){
          cout<<temp->data<<"->";
          temp = temp->next;
        }
        cout<<"null"<<endl;
       }


   };

     int main(){

      Linkedlist l;
      // l.push_front(10);
      // l.push_front(20);
      // l.push_front(30);
      // l.display();
      l.push_back(10);
      l.push_back(20);
      l.push_back(30);
      l.push_back(40);
      l.display();

     }