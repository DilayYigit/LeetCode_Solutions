class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() == t.length()) {
            for (int i = 0; i < s.length(); i++) {
                for (int j = 0; j < t.length(); j++) {
                    if (s[i] == t[j]) {
                        t.erase(j,1);
                        break;
                    }
                }
            }
            if (t.length() == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else
            return false;
    }
};
