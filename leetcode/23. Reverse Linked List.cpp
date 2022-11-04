class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* prev = nullptr) {
        if (!head)
            return prev;
        auto next = head->next;
        head->next = prev;
        return reverseList(next, head);
    }
};

// https://leetcode.com/problems/reverse-linked-list/