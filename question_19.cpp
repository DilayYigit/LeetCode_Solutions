class Solution {
public:
    int getLength(ListNode* head) {
    int size = 0;
    for (ListNode* cur = head; cur != NULL; cur = cur->next) {
        size++;
    }
    return size;
}

ListNode* findNode(ListNode* head, int index) {
    ListNode* loc = head;
    for(int i = 1; i < index; i++) {
        loc = loc->next;
    }
    return loc;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int index = getLength(head) - n + 1;
    ListNode* deleting;

    if (index == 1) {
        deleting = head;
        head = head->next;
    }
    else {
        ListNode *prev = findNode(head, index - 1);
        deleting = prev->next;
        prev->next = deleting->next;
    }

    deleting->next = NULL;
    delete deleting;
    deleting = NULL;

    return head;
    }
};
