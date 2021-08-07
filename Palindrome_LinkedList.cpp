class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return head;
        ListNode* headOfReversedSubList = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return headOfReversedSubList;
    }
    
    ListNode* midNode(ListNode* head) {
        int length = 0;
        for (ListNode* cur = head; cur != NULL; cur = cur->next)
            length++;
        
        for (int i = 0; i < (length+1)/2; i++)
            head = head->next;
        
        return head;
    }
    
    bool isPalindrome(ListNode* head) {
        if (head->next == NULL) {
            return true;
        }
        
        ListNode* reversed = reverse(midNode(head));

        if (head->next == reversed)
            return head->val == reversed->val;
        
        while (reversed != NULL) {
            if (reversed->val != head->val) {
                return false;
            }
            head = head->next;
            reversed = reversed->next;
        }
        return true;
    }
};
