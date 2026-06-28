class Solution {
public:
    bool isValid(string s) {
        stack<int> someStack;
        for (char c : s) {
            if (c == '(') {
                someStack.push(')');
            } else if (c == '{') {
                someStack.push('}');
            } else if (c == '[') {
                someStack.push(']');
            } else {
                if (someStack.empty() || someStack.top() != c) {
                    return false;
                }
                someStack.pop();
            }
        }

        if (someStack.size() > 0) {
            return false;
        }

        return true;
    }
};
