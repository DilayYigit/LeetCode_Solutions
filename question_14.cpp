class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string match = "";
        int shortest = shortestString(strs);

        for (int i = 0; i < shortest; i++) { //char index
            for (int j = 1; j < strs.size(); j++) { //word index
                if (strs[0][i] != strs[j][i]) {
                    return match;
                }
            }
            match += strs[0][i];
        }
        return match;
    }

    int shortestString(vector<string>& strs) {
        int shortest = strs[0].length();
        for (int i = 0; i < strs.size(); i++) {
            int len = strs[i].length();
            if (len < shortest) {
                shortest = len;
            }
        }
        return shortest;
    }
};
