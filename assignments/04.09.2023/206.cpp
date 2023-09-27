class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        if (head == NULL)
        return head;
            while (head != NULL)
            {
                curr = head;
                head = head->next;
                curr->next = prev;
                prev = curr;
            }
            return prev;
    }
};
