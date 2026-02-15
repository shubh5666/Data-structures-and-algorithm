// SUbmission link:- https://leetcode.com/problems/middle-of-the-linked-list/submissions/1919998685/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // now slow reach at the middle

        return slow;
    }
};