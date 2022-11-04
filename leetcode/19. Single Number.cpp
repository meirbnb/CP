class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto p = head;
        auto q = head;

        while(q && q->next){
            q = q->next->next;

            if (p == q)
                return true;
            
            p = p->next;
        }

        return false;
    }
};

// https://leetcode.com/problems/linked-list-cycle/