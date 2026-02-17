// Submission link:- https://leetcode.com/problems/linked-list-cycle/submissions/1922172110/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                return true;
            }
           
            
        }

        return false;
    }
};