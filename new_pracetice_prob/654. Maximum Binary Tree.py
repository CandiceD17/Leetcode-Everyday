# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        if(len(nums) == 0):
            return None
        if(len(nums) == 1):
            return  TreeNode(nums[0], None, None)
        max_val = max(nums)
        index = nums.index(max_val)
        left_tree = Solution().constructMaximumBinaryTree(nums[:index])
        right_tree = Solution().constructMaximumBinaryTree(nums[index + 1:])
        node = TreeNode(max_val, left_tree, right_tree)
        return node
