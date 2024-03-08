class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        if (nums.size() == 1) return nums[0];
        int half = (nums.size() / 2);
        return nums[half];
    }
};
