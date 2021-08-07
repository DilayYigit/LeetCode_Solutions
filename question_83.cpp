class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp;
        ListNode* cur = head;
        ListNode* prev = NULL;
        while (cur != NULL && cur->next != NULL) {
            if (cur->val == cur->next->val) {
                temp = cur;
                if (cur == head) {
                    head = head->next;
                    cur = cur->next;
                }
                else {
                    prev->next = cur->next;
                    cur = cur->next;
                }
                delete temp;
            }
            else {
                prev = cur;
                cur = cur->next;
            }

        }
        return head;
    }
};
