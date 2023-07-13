class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        odd = nums[0]
        even = 0
        for i in range(len(nums)):
            even = max(even, odd - nums[i])
            odd = max(odd, nums[i], even + nums[i])
        return max(odd, even)

# 2023.7.13
