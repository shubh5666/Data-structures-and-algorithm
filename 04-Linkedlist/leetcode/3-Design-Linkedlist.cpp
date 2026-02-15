// Submission link:- https://leetcode.com/problems/design-linked-list/

class Node{
    public:
    int value;
    Node* next;

    Node(int v){
       value = v;
       next = NULL;
    }
};

   class MyLinkedList{
    public:
    Node* head;
    int size;
      
      MyLinkedList(){
        head = NULL;
        size = 0;
      }
   
    int get(int index) {
      if(index < 0 || index>=size){
        return -1;
      }

      Node* temp = head;
      int count = 0;
      while(count<index){
        temp = temp->next;
        count++;
      }
      return temp->value;
        
    }
    
    void addAtHead(int val) {
       Node* newNode = new Node(val);
       newNode->next = head;
       head = newNode;
       size++;
        
    }
    
    void addAtTail(int val) {
        if(head == NULL){
            addAtHead(val);
            return;
        }

       Node* newNode = new Node(val);
      Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
          temp->next=newNode;
          size++;
        
    }
    
    void addAtIndex(int index, int val) {
        if(index< 0 || index > size){
            return;
        }

        if(index == 0){
        addAtHead(val);
        return;
        }

         Node* newNode = new Node(val);
         Node* prev = head;
           int count = 0;
           while(count<(index-1)){
               prev = prev->next;
               count++;
           }

           newNode->next = prev->next;
           prev->next = newNode;
           size++;
        
    }
    
    void deleteAtIndex(int index) {
       if(index<0 || index>= size){
        return;
       }
         
        if(index == 0){
            Node* temp = head;
              head = head->next;
               delete (temp);
               size--;
               return;
        }

        int count = 0;
        Node*  prev = head;
        while(count<(index-1)){
            prev = prev->next;
            count++;
        }

       Node* curr = prev->next;
        prev->next = curr->next;
        delete (curr);
        size--;
        
    }
};

