class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if not nums: return [-1, -1]

        # 前后补位，防止idx溢出
        nums.append(float('inf'))
        nums.insert(0,float('-inf'))

        # l,r都不存在，i和j的收敛具有确定性
        l,r = target-0.5, target+0.5

        # 因为找不到l,所以i会收敛至首个大于l元素的idx
        i, j = 0, len(nums)-1
        while i<=j:
            m = (i+j)//2
            if nums[m] < l:
                i = m+1
            else:
                j = m-1
        start = i

        # 因为找不到r,所以j会收敛至首个小于r元素的idx
        i, j = 0, len(nums)-1
        while i<=j:
            m = (i+j)//2
            if nums[m] < r:
                i = m+1
            else:
                j = m-1
        end = j

        if nums[start] != nums[end]: return [-1,-1] #不相等说明没找到target
        else: return [start-1, end-1] #-1是因为一开始添加了inf
