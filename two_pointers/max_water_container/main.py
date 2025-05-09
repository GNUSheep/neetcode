class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1

        max_area = 0
        while l < r:
            area = min(heights[l], heights[r]) * (r - l)

            max_area = max(area, max_area)

            if heights[l] > heights[r]:
                r -= 1
            else:
                l += 1
        return max_area
