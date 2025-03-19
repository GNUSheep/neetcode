class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets = {};

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i-1] == nums[i]) {
                continue;
            }

            int l = i + 1;
            int r = nums.size() - 1;

            while(l < r) {
                int res = nums[i] + nums[l] + nums[r];

                if (res == 0) {
                    triplets.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    l++;

                    while (nums[l-1] == nums[l]) {
                        l++;
                    }
                } else if (res > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }

        return (triplets);
    }
};
