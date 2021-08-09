class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        string result = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (stack.empty() || stack.top() != s[i]) {
                stack.push(s[i]);
            }
            else {
                stack.pop();
            }
        }
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
        reverse(result.begin(), result.end());
        
        /*
        (without using reverse function)
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }
        */
      
        return result;
    }
};
