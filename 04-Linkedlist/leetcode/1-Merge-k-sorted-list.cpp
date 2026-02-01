// Submission link:- https://leetcode.com/problems/merge-k-sorted-lists/submissions/1904492242/

 class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        if (l1 != NULL) temp->next = l1;
        else temp->next = l2;

        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;

        ListNode* ans = lists[0];

        for (int i = 1; i < lists.size(); i++) {
            ans = mergeTwoLists(ans, lists[i]);
        }

        return ans;
    }
};
