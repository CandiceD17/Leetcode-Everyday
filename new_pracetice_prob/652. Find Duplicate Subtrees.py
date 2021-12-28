# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def findDuplicateSubtrees(self, root: Optional[TreeNode]) -> List[Optional[TreeNode]]:
        dict_t = {}
        res = []
        def recur(root):
            if root == None:
                return '#'
        
            left_tree = recur(root.left)
            right_tree = recur(root.right)
        
            cur_tree = left_tree + ',' + right_tree + ',' + str(root.val)
            if cur_tree not in dict_t:
                dict_t[cur_tree] = 1
            else:
                if dict_t[cur_tree] == 1:
                    res.append(root)
                dict_t[cur_tree] += 1
        
            return cur_tree
        
        recur(root)
        return res
