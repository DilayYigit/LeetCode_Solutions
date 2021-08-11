class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> stack;
        string newS;
        string newT;

        for (int i = 0; i < s. size(); i++) {
            if (s[i] != '#') {
                stack.push(s[i]);
            }
            else if (s[i] == '#' && !stack.empty()) {
                stack.pop();
            }
        }
        while (!stack.empty()) {
            newS = stack.top() + newS;
            stack.pop();
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#') {
                stack.push(t[i]);
            }
            else if (t[i] == '#' && !stack.empty()){
                stack.pop();
            }
        }
        while (!stack.empty()) {
            newT = stack.top() + newT;
            stack.pop();
        }
        return newS == newT;
    }
};
