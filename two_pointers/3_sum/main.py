class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()

        triplets = set()
        for i in range(len(nums)):
            l = i + 1
            r = len(nums) - 1

            while l < r:
                res = nums[i] + nums[l] + nums[r]
                if res == 0:
                    triplets.add((nums[i], nums[l], nums[r]))
                    l += 1
                    r -= 1
                elif res > 0:
                    r -= 1
                else:
                    l += 1
        return list(triplets)
