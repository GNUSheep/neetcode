class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> output(temperatures.size(), 0);
        std::stack<pair<int, int>> stack = {};

        for(int i = 0; i < temperatures.size(); i++) {
            while(stack.size() != 0 && stack.top().second < temperatures[i]) {
                output[stack.top().first] = i - stack.top().first;

                stack.pop();
            }

            stack.push(pair<int, int> { i, temperatures[i] });
        }

        return output;
    }
};
