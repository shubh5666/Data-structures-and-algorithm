// Submission link:- https://leetcode.com/problems/rotate-list/submissions/1921241056/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL){
            return head;
        }

     ListNode* temp = head;
        int n=1;
        while(temp->next){
            n++;
            temp=temp->next;
        }

           k = k%n;

           if(k==0){
             return head ;
           }

           // make last node head;
           temp->next = head;

           //find (n-k)th node and make next node as newHead

           temp = head;
           for(int i=0;i<(n-k-1);i++){
            temp=temp->next;
           }

         ListNode* newHead = temp->next; // (n-k+1)th node is our newHead

        temp->next = NULL;

         return newHead;

     
    }
};