class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int s = 0;
        int c = 0;
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        while (l1 || l2 || c) {
            if (l1) {
                s += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                s += l2->val;
                l2 = l2->next;
            }
            s += c;
            c = s / 10;
            p->next = new ListNode(s % 10);
            p = p->next;
            s = 0;
        }
        ListNode *tmp = dummy;
        dummy = dummy->next;
        delete tmp;
        return dummy;
    }
};
