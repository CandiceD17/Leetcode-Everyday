class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        length = len(nums)
        if length <= 1:
            return 0
        left_scan = [nums[0]]
        right_scan = [nums[-1]]
        
        for i in range(1, length):
            if nums[i] > left_scan[i-1]:
                left_scan.append(nums[i])
            else:
                left_scan.append(left_scan[i-1])
            if nums[length - i - 1] < right_scan[0]:
                right_scan.insert(0, nums[length - i - 1])
            else:
                right_scan.insert(0, right_scan[0])
        start = length
        end = 0
        
        for i in range(length):
            if left_scan[i] > right_scan[i]:
                start = min(start, i)
                end = max(end, i)
        return max(end - start + 1, 0)
