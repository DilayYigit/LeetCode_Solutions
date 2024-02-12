class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long div = x;
        long long rem = 0;
        while (div != 0) {
            rem = (rem * 10) + (div % 10);
            div = div / 10;
        }
        return (rem == x);
    }
};
