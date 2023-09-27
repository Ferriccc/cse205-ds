class Solution {
public:
    ListNode *merge(ListNode *l1, ListNode *l2) {
        if (l1 == NULL) {
            return l2;
        }
        if (l2 == NULL) {
            return l1;
        }
        if (l1->val < l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        ListNode *tmp = new ListNode(-1000);
        tmp->next = list1;
        merge(tmp, list2);
        return tmp->next;
    }
};
