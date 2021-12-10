class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0, nums.size() - 1, nums); 
    }
    
    TreeNode* helper(int first, int last, vector<int>& nums) {
        if (first > last) 
            return NULL;
        int mid = (first + last + 1)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->right = helper(mid + 1, last, nums);
        root->left = helper(first, mid - 1, nums);
        return root;
    }
}; 
