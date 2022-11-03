class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* ans  = head;
        while(list1 && list2){
            if (list1->val <= list2->val){
                head->next = list1;
                list1 = list1->next;
                head = head->next;
            } else {
                head->next = list2;
                list2 = list2->next;
                head = head->next;
            }
        }
        if (list1)
            head->next = list1;
        if (list2)
            head->next = list2;
        return ans->next;
    }
};

// https://leetcode.com/problems/merge-two-sorted-lists/