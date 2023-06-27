class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int maxL = max(word1.size(), word2.size());
        for (int i = 0;i < maxL; i++) {
            if (i < word1.size())
                merged += word1[i];
            if (i < word2.size())
                merged += word2[i];
        }
        return merged;
    }
};
