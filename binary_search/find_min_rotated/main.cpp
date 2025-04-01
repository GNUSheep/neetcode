
class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;

        int output = nums[l];

        while (l <= r) {
            int m = l + ((r - l) / 2);

            if (nums[l] < nums[r]) {
                output = std::min(output, nums[l]);
                break;
            }

            output = std::min(output, nums[m]);
            if (nums[l] <= nums[m]) {
                l = m + 1;
            } else{
                r = m - 1;
            }
        }

        return output;
    }
};
