
class Solution {
public:
    void backtrack(int open_p, int close_p, vector<string> &output, string &stack, int n) {
        if (open_p == close_p && close_p == n) {
            output.push_back(stack);
            return;
        }

        if (open_p < n) {
            stack += "(";
            backtrack(open_p + 1, close_p, output, stack, n);
            stack.pop_back();
        }

        if (close_p < open_p) {
            stack += ")";
            backtrack(open_p, close_p + 1, output, stack, n);
            stack.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> output = {};
        string stack = "";

        backtrack(0, 0, output, stack, n);

        return (output);
    }
};
