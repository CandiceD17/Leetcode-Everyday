class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        while(left <= right):
            mid = int(left + (right - left) / 2)
            if nums[mid] == target:
                    return mid
            elif nums[left] < nums[mid]: # has order
                if target == nums[left]:
                    return left
                if target > nums[left] and target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
            else:
                if target == nums[right]:
                    return right
                if target > nums[mid] and target < nums[right]:
                    left = mid + 1
                else:
                    right = mid - 1
        return -1
