class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;

        int area = 0;
        int max_area = 0;
        while (l < r) {
            area = min(heights[l], heights[r]) * (r - l);

            max_area = max(area, max_area);

            if (heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }

        return (max_area);
    }
};
