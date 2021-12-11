class Solution {
public:
    vector<int> preorder;
    vector<int> preorderTraversal(TreeNode* root) {
        helper(root);
        return preorder;
    }
    void helper(TreeNode* root) {
        if (root != NULL) {
            preorder.push_back(root->val);
            helper(root->left);
            helper(root->right);
        }
    }
};
