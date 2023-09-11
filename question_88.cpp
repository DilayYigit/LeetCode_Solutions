class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1 = nums2;
        }
        int size = m + n - 1;
        int indM = m - 1;
        int indN = n - 1;
        while (indM >= 0 && indN >= 0) {
            if (nums1[indM] < nums2[indN]) {
                nums1.at(size) = nums2[indN];
                indN--;
            } else {
                nums1.at(size) = nums1[indM];
                indM--;
            }
            size--;
        }
        while (indN >= 0) {
            nums1[size--] = nums2[indN--];
        }
    }
};
