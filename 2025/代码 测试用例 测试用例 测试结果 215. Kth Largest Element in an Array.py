class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        import heapq

        nums = [-n for n in nums]
        heap_nums = heapq.heapify(nums)
        ans = -1
        while k > 0:
            ans = -heapq.heappop(nums)
            k -= 1
        return ans

Note: Need to learn how heap works
