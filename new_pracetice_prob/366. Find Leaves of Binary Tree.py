# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findLeaves(self, root: TreeNode) -> List[List[int]]:
        def store_leaf(root):
            if root is None:
                return 0
            l, r = store_leaf(root.left), store_leaf(root.right)
            level = max(l, r) + 1
            leaf_level[level].append(root.val)
            return level
        
        leaf_level = collections.defaultdict(list)
        store_leaf(root)
        
        return [v for v in leaf_level.values()]
