# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return []
        level_queue = [root]
        res = []
        
        while len(level_queue) > 0:
            cur_size = len(level_queue)
            res_level = []
            
            for i in range(cur_size):
                top = level_queue[0]
                level_queue.pop(0)
                res_level.append(top.val)
                if top.left is not None:
                    level_queue.append(top.left)
                if top.right is not None:
                    level_queue.append(top.right)
            
            res.append(res_level)
        
        return res
