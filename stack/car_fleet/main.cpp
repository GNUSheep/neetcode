class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<double> stack = {};
        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        for(auto &car : cars) {
            stack.push_back((double)(target - car.first) / car.second);
            if(stack.size() >= 2 && stack[stack.size() - 1] <= stack[stack.size() - 2]) {
                stack.pop_back();
            }
        }

        return stack.size();
    }
};
