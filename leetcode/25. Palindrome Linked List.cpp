class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while(b && b->next){
            b = b->next->next;
            a = a->next;
        }
        ListNode* tail = nullptr;
        while(a){
            ListNode* nxt = a->next;
            a->next = tail;
            tail = a;
            a = nxt;
        }
        while(head && tail){
            if (head->val != tail->val)
                return false;
            head = head->next;
            tail = tail->next;
        }
        return true;
    }
};

// https://leetcode.com/problems/palindrome-linked-list/
