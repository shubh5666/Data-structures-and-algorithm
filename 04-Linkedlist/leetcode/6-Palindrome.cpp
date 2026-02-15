// Submission link:- https://leetcode.com/problems/palindrome-linked-list/submissions/1920359649/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL  || head->next == NULL){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow reached to the middle

        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        ListNode* next = NULL;

        while(curr!=NULL){
            next = curr->next;
           curr->next=prev;
            prev = curr;
            curr = next;

        }

        // compare

        ListNode* first = head;
        ListNode* second = prev;

        while(second!=NULL){
            if(first->val != second->val)
            return false;

            first = first->next;
            second = second->next;
        }


        return true;
        
    }
};


// two pointer approach 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;

        while (head != nullptr) {
            arr.push_back(head->val);
            head = head->next;
        }

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            if (arr[left] != arr[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;        
    }
};