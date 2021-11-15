class Solution {
public:
    bool isBalanced(TreeNode* root) {
    
        if (root == NULL) 
            return true;
        if ((abs(height(root->left) - height(root->right)) <= 1) 
            && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
       
    }
    int height(TreeNode* root) {
       if (root == NULL) {
           return 0;
       }
        return 1 + max(height(root->left), height(root->right));
    }
};
