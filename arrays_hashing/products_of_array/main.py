class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = [0] * len(nums)
        suffix = [0] * len(nums)

        prefix[0] = 1
        suffix[len(nums)-1] = 1

        # 1 2 4 6
        # 1 1 2 8
        #48 24 6 1
        for i in range(1, len(nums)):
            prefix[i] = prefix[i-1] * nums[i-1]
        for i in reversed(range(0, len(nums)-1)):
            suffix[i] = suffix[i+1] * nums[i+1]

        output = []
        for i in range(len(nums)):
            output.append(prefix[i] * suffix[i])
        return output
