class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum -= nums[i];
            if (sum == ans) {
                return i;
            }
            ans += nums[i];
        }
        return -1;
    }
};
