class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        vector<int> result;
        
        TreeNode* cur = root;
        
        while (cur != NULL || !stack.empty()) {
            while (cur != NULL) {
                stack.push(cur);
                cur = cur->left;
            }
            cur= stack.top();
            stack.pop();

            result.push_back(cur->val);

            cur = cur->right;
        }
        return result;
    }
    
};
