# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    cur_sum = 0
    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def inorder(root):
            if root == None:
                return
            inorder(root.right)
            self.cur_sum += root.val
            root.val = self.cur_sum
            inorder(root.left)
        inorder(root)
        return root
