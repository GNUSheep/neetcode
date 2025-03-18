class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> nums_set = {};
        for (int n : nums) {
            nums_set.insert(n);
        }
        int l = 1;
        int max_l = 0;

        for (int n: nums_set) {
            if (nums_set.find(n - 1) == nums_set.end()) {
                l = 1;
                while (nums_set.find(n + l) != nums_set.end()) {
                    l++;
                }
                max_l = max(max_l, l);
            }
        }

        return (max_l);
    }
};
