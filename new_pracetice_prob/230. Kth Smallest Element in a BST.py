# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    n = 0
    res = 0
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.n = k
        def recur(root):
            if root is None:
                return
            recur(root.left)
            self.n -= 1
            if self.n == 0:
                self.res = root.val
                return
            recur(root.right)
        recur(root)
        return self.res
