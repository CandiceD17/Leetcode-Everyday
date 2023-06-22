// https://leetcode.cn/problems/shu-de-zi-jie-gou-lcof/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isEqual(TreeNode* A, TreeNode* B){
        if (!B)
            return true;
        if (!A)
            return false;
        return A->val == B->val && isEqual(A->left, B->left) && isEqual(A->right, B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A || !B)
            return false;
        if (A->val == B->val && isEqual(A, B))
            return true;
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};
// 2023.06.21
