#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map_nums = {};

        for(int i = 0; i < nums.size(); i++) {
            auto it = map_nums.find(target - nums[i]);
            if(it != map_nums.end()) {
                return vector<int> {min(i, it->second), max(i, it->second)};
            }
            map_nums[nums[i]] = i;
        }

        return vector<int> {};
    }
};
