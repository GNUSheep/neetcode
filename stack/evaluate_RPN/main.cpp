
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;

        for (auto &c : tokens) {
            if (c != "+" && c != "-" && c != "/" && c != "*") {
                stack.push(stoi(c));
                continue;
            }

            int v2 = stack.top();
            stack.pop();

            int v1 = stack.top();
            stack.pop();

            if (c == "+") { stack.push(v1 + v2); }
            else if (c == "-") { stack.push(v1 - v2); }
            else if (c == "/") { stack.push(v1 / v2); }
            else {
                stack.push(v1 * v2);
            }
        }

        return (stack.top());
    }
};
