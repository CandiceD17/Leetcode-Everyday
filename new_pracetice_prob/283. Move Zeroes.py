class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = 0
        while True:
            try:
                nums.remove(0)
                count += 1
            except:
                for i in range(count):
                    nums.append(0)
                return
