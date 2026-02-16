// Submission link:- https://leetcode.com/problems/reverse-linked-list/submissions/1920058984/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* prev = NULL;
         ListNode* curr = head;

        while(curr){
           ListNode*  next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
      
      return prev;

    }
   
};