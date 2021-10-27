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
private:
    TreeNode* res = NULL;
public:
    int findLow(TreeNode* cur, TreeNode* p, TreeNode* q){
        if(cur==NULL)
            return 0;
        int left = findLow(cur->left, p, q);
        int right = findLow(cur->right, p, q);
        int mid = (cur==p || cur==q) ? 1:0;
        if(left+right+mid>=2)
            res = cur;
        return (mid+left+right>0);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int temp = findLow(root, p, q);
        return res;
    }
};

2019.09.18
