class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map_num = dict()

        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in map_num:
                return [min(i, map_num[diff]), max(i, map_num[diff])]
            map_num[nums[i]] = i
