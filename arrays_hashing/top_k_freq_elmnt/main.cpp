#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq = {};
        vector<vector<int>> freq_vec(nums.size() + 1);
        for (int i : nums) {
            freq[i] = freq[i] + 1;
        }

        for (auto &it : freq) {
            freq_vec[it.second].push_back(it.first);
        }

        vector<int> res = {};
        for (int i = freq_vec.size() - 1; i > 0; --i) {
            for (int n : freq_vec[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }

        return res;
    }
};
