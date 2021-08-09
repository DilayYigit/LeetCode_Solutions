class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stack;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = nums2.size() - 1; j >= 0; j--) {
                stack.push(nums2[j]);
            }
            while (!stack.empty()) {
                if (nums1[i] == stack.top()) {
                    int temp = stack.top();
                    stack.pop();
                    int greater = temp;
                    while (!stack.empty()) {
                        if (stack.top() > temp) {
                            greater = stack.top();
                            break;
                        }
                        else
                            stack.pop();
                    }
                    if (greater != temp) {
                        nums1[i] = greater;
                    }
                    else
                        nums1[i] = -1;
                    break;
                }
                else
                    stack.pop();
            }

            while (!stack.empty()) {
                stack.pop();
            }
        }
        return nums1;
    }
};
