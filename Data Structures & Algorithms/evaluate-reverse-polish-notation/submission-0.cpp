class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> tokens_stack;

        for (const string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int tmp1 = tokens_stack.top();
                tokens_stack.pop();
                int tmp2 = tokens_stack.top();
                tokens_stack.pop(); 

                if (s == "+") {
                    tokens_stack.push(tmp2 + tmp1);
                } else if (s == "-") {
                    tokens_stack.push(tmp2 - tmp1);
                } else if (s == "*") {
                    tokens_stack.push(tmp2 * tmp1);
                } else if (s == "/") {
                    tokens_stack.push(tmp2 / tmp1);
                }
            } 

            else {
                tokens_stack.push(stoi(s));
            }
        }
        
        return tokens_stack.top();
    }
};
