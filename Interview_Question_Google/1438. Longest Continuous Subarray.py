class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        res = 1
        for i in range(len(nums)):
            for j in range(len(nums)-1, -1, -1):
                if i >= j:
                    break
                if max(nums[i:j+1]) - min(nums[i:j+1]) <= limit:
                    res = max(res, j-i+1)
        return res

# the above code results in time out of limit error
# so try to find a more convenient solution:

class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        if not nums:
            return 0
        curr_max = nums[0]
        curr_min = nums[0]
        window = []
        for x in nums:
            if abs(x - curr_max) <=  limit and abs(x - curr_min) <=  limit and abs(curr_max - curr_min) <= limit:
                curr_max = max(x,curr_max)
                curr_min = min(x,curr_min)
                window.append(x)
            else:    
                window.append(x)
                window.pop(0)
                curr_max = max(window)
                curr_min = min(window)
        return len(window)
