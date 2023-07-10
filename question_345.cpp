class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    string reverseVowels(string s) {
        if (s.length() == 1) return s;
        int f = 0;
        int l = s.length() - 1;
        while (f < l) {
            if (isVowel(s.at(f)) && isVowel(s.at(l))) {
                char temp = s.at(f);
                s.at(f) = s.at(l);
                s.at(l) = temp;
                f++;
                l--;
            } else if (isVowel(s.at(f)) && !isVowel(s.at(l))) {
                l--;
            } else if (!isVowel(s.at(f)) && isVowel(s.at(l))) {
                f++;
            } else {
                f++;
                l--;
            }
        }
        return s;
    }
};
