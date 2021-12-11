class Solution {
public:
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if (root != NULL) {
            if (root->left != NULL && root->left->right == NULL && root->left->left == NULL) {
                sum += root->left->val;
            }
            sumOfLeftLeaves(root->left);
            sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};
