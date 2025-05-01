class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = 0
        right = 0
        total_sum = 0
        min_length = float("inf")
        
        while left <= right and right < len(nums):
            total_sum += nums[right]
            while total_sum >= target and left <= right:
                min_length = min(min_length, right - left + 1)
                total_sum -= nums[left]
                left += 1
            
            right += 1
        
        if min_length < float("inf"):
            return min_length
        return 0
