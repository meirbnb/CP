class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while(b && b->next){
            b = b->next->next;
            a = a->next;
        }
        ListNode* r = nullptr;
        while(a){
            ListNode* nxt = a->next;
            a->next = r;
            r = a;
            a = nxt;
        }
        while(head && r){
            if (head->val != r->val)
                return false;
            head = head->next;
            r = r->next;
        }
        return true;
    }
};

// https://leetcode.com/problems/palindrome-linked-list/