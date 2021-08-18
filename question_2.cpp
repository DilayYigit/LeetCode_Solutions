class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = new ListNode;
        int b = (l1->val + l2->val) / 10;
        int k = (l1->val + l2->val) % 10;
        
        head->val = k;
        l1 = l1->next;
        l2 = l2->next;
        
        ListNode* cur = head;
        
        while (l1 != NULL || l2 != NULL) {
            cur->next = new ListNode;
            cur = cur->next;
            
            if (l1 == NULL) {
                k = (l2->val + b) % 10;
                cur->val = k;
                b = (l2->val + b) / 10;
                l2 = l2->next;
            }
            else if (l2 == NULL) {
                k = (l1->val + b) % 10;
                cur->val = k;
                b = (l1->val + b) / 10;
                l1 = l1->next;
            }
            else {
                k = (l1->val + l2->val + b) % 10;
                b = (l1->val + l2->val + b) / 10;
                cur->val = k;
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        
        if (b != 0) {
            cur->next = new ListNode;
            cur = cur->next;
            
            cur->val = b;
        }
        cur->next = NULL;
        
        return head;
    }
    
};
