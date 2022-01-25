class Solution:
    def jump(self, nums: List[int]) -> int:
        length = len(nums)
        dp = [length for i in range(length)]
        dp[length - 1] = 0
        i = length - 2
        while i >= 0:
            for j in range(1, nums[i] + 1):
                if i + j >= length:
                    break
                dp[i] = min(dp[i], dp[i + j] + 1)
            i -= 1
        return dp[0]
