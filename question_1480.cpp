class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return nums;
        } else {
            int sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i];
                nums[i] = sum;
            }   
        }
        return nums;
    }
};
