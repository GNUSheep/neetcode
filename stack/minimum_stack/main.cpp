
class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack;

public:
    MinStack() {}
    
    void push(int val) {
        int min_val = (min_stack.empty() ? val : min_stack.top());
        min_stack.push(std::min(val, min_val));
        stack.push(val);
    }
    
    void pop() {
        stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return (stack.top());
    }
    
    int getMin() {
        return (min_stack.top());
    }
};
