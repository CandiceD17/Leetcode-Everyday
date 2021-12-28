# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> TreeNode:
        if len(inorder) == 0 or len(postorder) == 0:
            return None
        value = postorder[-1]
        index = inorder.index(value)
        
        left_tree = Solution().buildTree(inorder[:index], postorder[:index])
        right_tree = Solution().buildTree(inorder[index+1:], postorder[index:-1])
        node = TreeNode(value, left_tree, right_tree)
        return node
