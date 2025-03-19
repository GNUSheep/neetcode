class Solution:
    def trap(self, height: List[int]) -> int:
        # 0 0 2 2 3 3 3 3 3 3 3
        # 3 3 3 3 3 3 3 2 1 0 0

        # 0 0 2 0 2 3 2 0 0 0 0

        prefix = [0] * len(height)
        suffix = [0] * len(height)

        for i in range(1, len(height)):
            prefix[i] = max(prefix[i-1], height[i-1])
        
        for i in reversed(range(0, len(height) - 1)):
            suffix[i] = max(suffix[i+1], height[i+1])

        trap_water = 0
        for i in range(len(height)):
            level_of_water = min(suffix[i], prefix[i]) - height[i]

            if level_of_water > 0:
                trap_water += level_of_water
        return trap_water
