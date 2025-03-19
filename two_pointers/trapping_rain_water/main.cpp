class Solution {
public:
    int trap(vector<int>& height) {
        int prefix[height.size()] = {};
        int suffix[height.size()] = {};

        prefix[0] = 0;
        suffix[height.size() - 1] = 0;

        for(int i = 1; i < height.size(); i++) {
            prefix[i] = max(prefix[i-1], height[i-1]);
        }

        for(int i = height.size() - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i+1], height[i+1]);
        }

        int trap_water = 0;
        int level_of_water = 0;
        for(int i = 0; i < height.size(); i++) {
            level_of_water = min(suffix[i], prefix[i]) - height[i];
            if(level_of_water > 0) {
                trap_water += level_of_water;
            }
        }

        return (trap_water);
    }
};
