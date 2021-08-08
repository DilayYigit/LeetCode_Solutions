class MinStack {
public:
    
    MinStack() {
        topPtr = NULL;
    }
    
    void push(int val) {
        Node* newPtr = new Node;
        newPtr->item = val;
        newPtr->next = topPtr;
        topPtr = newPtr;
    }
    
    void pop() {
        if (topPtr != NULL) {
            Node* temp = topPtr;
            topPtr = topPtr->next;
            temp->next = NULL;
            delete temp;
        }
    }
    
    int top() {
        return topPtr->item;
    }
    
    int getMin() {
        int min = topPtr->item;
        for (Node* cur = topPtr; cur != NULL; cur = cur->next) {
            if (cur->item < min)
                min = cur->item;
        }
        return min;
    }

private:
    struct Node {
        int item;
        Node* next;
    };
    Node* topPtr;
    
};
