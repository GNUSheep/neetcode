class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        set_nums = set(nums)

        l = 0
        max_l = 0
        for n in set_nums:
            if n - 1 not in set_nums:
                l = 1
                while n + l in set_nums:
                    l += 1
                max_l = max(l, max_l)
        return max_l 
