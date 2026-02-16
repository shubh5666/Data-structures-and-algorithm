// Submission link:- https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
     ListNode* reverseList(ListNode* head){
       ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
          ListNode*  next = curr->next;
           curr->next = prev;
           prev = curr;
           curr=next;
            
        }
         return prev;

     }

     ListNode* deleteAtK(ListNode* head , int position){
            if(position == 1){
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
       
        ListNode* prev = head;
        int count = 1;
        while(count<(position-1)){
          prev = prev->next;
          count++;
        }
          
        ListNode* curr = prev->next;
        prev->next = curr->next;
        delete curr;
        return head;

      }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
       head = reverseList(head);

       head = deleteAtK(head,n);

       head = reverseList(head);

       return head;

    }
};