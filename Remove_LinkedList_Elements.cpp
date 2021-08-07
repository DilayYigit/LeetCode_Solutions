class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* temp;
        while (cur != NULL) {
            if (cur->val == val) {  
                temp = cur;
                if (cur == head) {
                    head = head->next;
                    cur = cur->next;
                } else {
                    prev->next = cur->next;
                    cur = cur->next;
                }
                delete temp;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
