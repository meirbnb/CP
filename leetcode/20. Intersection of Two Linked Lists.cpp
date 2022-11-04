class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto p = headA;
        auto q = headB;

        while(p != q){
            if (!p)
                p = headB;
            else if (!q)
                q = headA;
            else
                p = p->next, q = q->next;
        }

        return q;
    }
};

// https://leetcode.com/problems/intersection-of-two-linked-lists/