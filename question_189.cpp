class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> numsRotate;
        for (int i = 0; i < nums.size(); i++) {
            numsRotate.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[(i+k)%nums.size()] = numsRotate[i];
        }
    }
};
