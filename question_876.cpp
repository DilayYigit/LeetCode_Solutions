class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    int length = 0;
    int midIndex;
    ListNode* last = head;
    for (ListNode* cur = head; cur != NULL; cur = cur->next) {
        length++;
    }
    if (length % 2 == 0)
        midIndex = (length/2)+1;
    else
        midIndex = (length+1)/2;
    for (int i = 1; i < midIndex; i++) {
        last = last->next;
    }
    return last;
        
    }
};
